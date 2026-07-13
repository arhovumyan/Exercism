#include "grains.h"
#include <cmath>

namespace grains {
    unsigned long long square(int value) {
        unsigned long long result = 1;

        for (int i = 1; i < value;i++){
            result *= 2;
        }

        return result;
    }

    unsigned long long total() {
        
        return std::numeric_limits<unsigned long long>::max();
    }
// TODO: add your solution here

}  // namespace grains
