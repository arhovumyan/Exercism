#include "difference_of_squares.h"
#include <cmath>
#include <iostream>

namespace difference_of_squares {
    long square_of_sum(long number){
        long result = 0;
        for (long i = 1; i <= number;++i){
            std::cout << "we got" << result << std::endl;
            result += i;
        }
        return result * result;
    }
    long sum_of_squares(long number){
        long result = 0;
        for (long i = 1; i <= number;++i){
            result = result + i * i; 
        }
        return result;
    }
    long difference(long difference){
        return square_of_sum(difference) - sum_of_squares(difference);
    }

}  // namespace difference_of_squares

// long main () {
//     long sq = difference_of_squares::square_of_sum(5);
//     long num = difference_of_squares::sum_of_squares(5);
//     long diff = difference_of_squares::difference(5);

//     std::cout << sq << std::endl;
//     std::cout << num << std::endl;
//     std::cout << diff << std::endl;

//     return 0;
// }