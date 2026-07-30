#include "sieve.h"
#include <vector>
#include <algorithm>

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
        std::vector<int> veco(int num){
            std::vector<int> result;

            for(int i = 2; i <= num;i++){
                result.push_back(i);
            }
            return result;
        }

        std::vector<int> primes(int number){
            auto numbers = veco(number);
            // you wanna pass through the vector and delete all the squares of the numbers[i]
            if (numbers.size() <= 2) return numbers;
            for (int i = 2; i * i <= numbers.back(); ++i) {
                numbers.erase(std::remove_if(numbers.begin(), numbers.end(),[i](int n) {
                        return n != i && n % i == 0;}),numbers.end());
            }
            return numbers;
        }

}  // namespace sieve
