#pragma once
#include <vector>

namespace sieve {
    // take a number
    // start from 2 and go to the given number
    // first only store all the numbers in a vector
    
    // start iterating
    
    // 1) start your functionality on arr[i]
    // 2) the function is -> mark all the squares of that number
            // 2.1) you do the squares until its <= the given number
    // 3) once you are done, you check for the next number to see if its marked
        // 3.1) if its not, start from point 1

    std::vector<int> veco(int num);
    std::vector<int> primes(int number);
}  // namespace sieve
