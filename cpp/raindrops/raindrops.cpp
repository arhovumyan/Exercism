#include "raindrops.h"
#include <string>
#include <iostream>

namespace raindrops {
// TODO: add your solution here
// write out your cases
/*
- is divisible by 3, add "Pling" to the result.
- is divisible by 5, add "Plang" to the result.
- is divisible by 7, add "Plong" to the result.
*/

std::string convert(int number) {
    std::string result = "";
    if (number % 3 == 0) result += "Pling";
    if (number % 5 == 0) result += "Plang";
    if (number % 7 == 0) result += "Plong";
    if (result.empty())
    {
        return std::to_string(number);
    }
    return result;
}

}  // namespace raindrops
