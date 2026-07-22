#pragma once
#include <map>
#include <string>
// you take a string and go through each character one by one
// you take note first whether the current character is in the set of characters "ATTACG"
// every time you see any of the characters, you add 1 to their count
// you need a map of char and int pairs
// if your map is empty return error
namespace nucleotide_count {

    std::map<char, int> count (const std::string word);
}  // namespace nucleotide_count
