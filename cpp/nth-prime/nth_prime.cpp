#include "nth_prime.h"
#include <vector>
#include <iostream>

namespace nth_prime {
// what is a prime number
// its a number that only divides by itself and 1
// this means that every number % some other number == 0 then its not a prime number
// if number is 7
// you start at 2
/* is 7 % 2 == 0
    no. add 2 to the string
    is 7 % 3 == 3
*/
int nth(int number){
    std::vector<int> vecc;
    while (vecc.size() <= number){
        if (number % i != 0) vecc.push_back(i); 
    } 
    return vecc.back();
}
}  // namespace nth_prime

int main () {
    int n nth_prime::nth(7);

    std::cout << n << std::endl;
}