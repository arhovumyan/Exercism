#include "queen_attack.h"
#include <cmath>
#include <iostream>
#include <utility>

namespace queen_attack {
    
    chess_board::chess_board(std::pair<int, int> white,
                             std::pair<int, int> black)
                : white_position{white}, black_position{black}{

    auto valid = [](std::pair<int, int> pos){
        return pos.first < 8 && pos.first >= 0 && pos.second >= 0 && pos.second < 8;    
    };

    if (white.first == black.first && white.second == black.second){
        throw std::domain_error("Domain Error");
    }
    if (!valid(white) || !valid(black)) {
    throw std::domain_error("Domain Error");
    }
}

    std::pair<int,int> chess_board::white() const {
        return white_position;    
    }
    
    std::pair<int,int> chess_board::black() const {
        return black_position;    
    }
    bool chess_board::can_attack() const {
        bool sameHor = white_position.first == black_position.first;
        bool sameVert = white_position.second == black_position.second;
        bool sameDiag = abs(white_position.first - black_position.first)
        == abs(white_position.second - black_position.second);

        return sameHor || sameVert || sameDiag;
    }
}  // namespace queen_attack

// int main () {
//     std::pair<int, int> white{0,0};
//     std::pair<int, int> black{8,8};
 
//     return 0;
// }