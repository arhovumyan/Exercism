#include "hamming.h"
#include <string>
#include <iostream>

namespace hamming {
    int compute(const std::string& first, const std::string& second){
        int count = 0;
        if (first.size() != second.size()) throw std::domain_error("error");

        for (std::size_t i = 0; i < first.size(); i++){
            if (first[i] != second[i]) count++;
        }
        return count;
    }
}  // namespace hamming

// int main () {
//     //create an object comp
//     int comp = hamming::compute("GAGCCTACTAACGGGAT", "CATCGTAATGACGGCCT");

//     std::cout << comp << std::endl;
//     return 0;
// }
