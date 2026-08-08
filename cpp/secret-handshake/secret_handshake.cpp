#include "secret_handshake.h"
#include <string>
#include <algorithm>
#include <bitset>

namespace secret_handshake {


    // int converter(int number){
    //     // you need to take the number and turn it into its binary form 
    //     bitset<8> binary(number);
        
    // }

    std::vector<std::string> commands(int number){
        // this string as to accept the number and go one by one to see what commands we have
        // make a vector of strings that contain the secret handshakes
        // you will iterate through the 
        std::bitset<5> numbers(number);
        std::string length = numbers.to_string();

        std::vector<std::string> wordsToMap{
            {"wink"},{"double blink"},{"close your eyes"},{"jump"}
        };
        std::vector<std::string> result;
        for (int i = length.size()-1; i >= 1; --i) {
            if (length[i] == '1') result.push_back(wordsToMap[4-i]);
        }
        
        if (length[0] == '1') std::reverse(result.begin(), result.end());
        return result;
    }
    

}  // namespace secret_handshake
