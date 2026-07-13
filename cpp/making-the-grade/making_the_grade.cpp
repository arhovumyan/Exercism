#include <array>
#include <string>
#include <vector>

// Round down all provided student scores.
std::vector<int> round_down_scores(std::vector<double> student_scores) {
    // TODO: Implement round_down_scores
    std::vector<int> result;
    result.reserve(student_scores.size());
    
    for (double num : student_scores){
        result.emplace_back(static_cast<int>(num));
    }
    return result;
}

// Count the number of failing students out of the group provided.
int count_failed_students(std::vector<int> student_scores) {
    // TODO: Implement count_failed_students
    int numFailed = 0;
    for (int score : student_scores){
        if (score <= 40) numFailed++;
    }
    return numFailed;
}

// Create a list of grade thresholds based on the provided highest grade.
std::array<int, 4> letter_grades(int highest_score) {
    // TODO: Implement letter_grades
    int split = (highest_score - 40)/4;

    int a = highest_score - split;
    int b = a - split;
    int c = b - split;
    int d = c - split;

    return {d,c,b,a};
}

// Organize the student's rank, name, and grade information in ascending order.
std::vector<std::string> student_ranking(
    std::vector<int> student_scores, std::vector<std::string> student_names) {
    // TODO: Implement student_ranking
    std::vector<std::string> result;
    for (int nums = 0; nums < student_scores.size(); nums++){
        result.push_back(std::to_string(nums + 1) + ". " 
        + student_names[nums] + ": " 
        + std::to_string(student_scores[nums]));
    }
    return result;
}

// Create a string that contains the name of the first student to make a perfect
// score on the exam.
std::string perfect_score(std::vector<int> student_scores,
                          std::vector<std::string> student_names) {
    // TODO: Implement perfect_score
    for (int i = 0; i < student_scores.size();i++) {
        if (student_scores[i] == 100) return student_names[i];
    }
    return "";
}
