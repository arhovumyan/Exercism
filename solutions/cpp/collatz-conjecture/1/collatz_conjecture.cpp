#include "collatz_conjecture.h"
#include <iostream>


namespace collatz_conjecture {

int steps(int number) {
    int count = 0;
    if (number == 1) return 0;
    if (number <= 0) throw std::domain_error("error");
    while (number > 1) {
        if (number % 2 == 0) number /= 2;
        else number = number * 3 + 1; 
        count++;
    }
    return count;
    }
}  // namespace collatz_conjecture
