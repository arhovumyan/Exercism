#include "nucleotide_count.h"
#include <string>
#include <map>
#include <iostream>

namespace nucleotide_count {

    
    std::map<char, int> count (const std::string word){
        std::map<char, int> expected {{'A', 0},{'C', 0},{'G', 0},{'T', 0}};
        // iterate through the word string,
        // whenever you see a character thats also in the expected.first, then expected.second++
        for (const char& c : word){
            if (expected.find(c) == expected.end()) {
            throw std::invalid_argument("Invalid nucleotide");
        }
            expected[c]++;
        }
        return expected;
    }
}  

// int main () {
//     auto dna = nucleotide_count::count("LKASJDLASD");

//     for (const auto& c : dna) std::cout << c.first << ": " << c.second << std::endl;

//     return 0; 
// }
