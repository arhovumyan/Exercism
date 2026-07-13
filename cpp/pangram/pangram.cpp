#include "pangram.h"
#include <unordered_set>
#include <string>
#include <iostream>

namespace pangram {
// TODO: add your solution here
std::unordered_set<char> getAlphabetSet(){
    std::unordered_set<char> alphabet;

    for (char c  = 'a';c <='z';c++){
        alphabet.insert(c);
    }
    return alphabet;
}
bool is_pangram(std::string sentence){
    std::unordered_set<char> comparison = getAlphabetSet();

    for (const auto& character : sentence){
        comparison.erase(std::tolower(character));
    }

    return comparison.empty();
}

}  // namespace pangram
