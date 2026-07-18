#pragma once
#include <map>
#include <vector>
#include <string>

namespace grade_school {

class school {
private:
    std::map<int,std::vector<std::string>> students;

public:
    void add(const std::string& name, int grade_number);
    std::vector<std::string> grade(int grade_number) const;
    std::vector<std::string> roster() const ;
};

}  // namespace grade_school
