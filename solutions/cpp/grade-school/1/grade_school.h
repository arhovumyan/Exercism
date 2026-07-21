/*
Create a roster for the school

1) add students to the roster
    each student should be added to its own grade. 
2) retrieve a list of students in the given grade.
3) get a sorted list of all students in all grades.
    sorted alphabetically and numerically increasingly

each student name can be only added once


*/

#pragma once
#include <map>
#include <vector>
#include <string>

namespace grade_school {
    
struct Student {
    std::string studentName;
    int studentGrade;
};

struct school {
private:
    std::vector<Student> students_;

public:
    void add(const std::string& name, int grade);
    std::vector<std::string> grade(int gradeNumber) const;
    std::map<int, std::vector<std::string>> roster() const;
};
}  // namespace grade_school
