#include "grade_school.h"
#include <vector>
#include <algorithm>
#include <string>
#include <map>
#include <iostream>

namespace grade_school {

    void school::add(const std::string& name, int grade){
        students_.push_back(Student{name, grade});
    }

    std::vector<std::string> school::grade(int gradeNumber) const{
        std::vector<std::string> studentsOfGrade;

        for (const Student& student : students_) {
            if (student.studentGrade == gradeNumber) {
                studentsOfGrade.push_back(student.studentName);
            }
        }

        std::sort(studentsOfGrade.begin(), studentsOfGrade.end());
        return studentsOfGrade;
    }

    std::map<int, std::vector<std::string>> school::roster() const{
        std::map<int, std::vector<std::string>> result;
        for (const Student& student : students_) {
            result[student.studentGrade].push_back(student.studentName);
        }
        for (auto& gradeGroup : result) {
            std::sort(gradeGroup.second.begin(), gradeGroup.second.end());
        }
        return result;
    }

}  // namespace grade_school


// int main () {
//     grade_school::addStudents("patrick", 2);
//     auto students = grade_school::listStudents(2);
//     for (const auto& c: students) std::cout << c << std::endl;
//     return 0;
// }