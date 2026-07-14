#include "two_fer.h"
#include <string>
#include <iostream>

namespace two_fer {
std::string two_fer(std::string name){
    std::string result = "One for " + name + ", one for me.";
    return result;
}
}  // namespace two_fer
