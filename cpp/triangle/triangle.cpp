#include "triangle.h"
#include <stdexcept>

namespace triangle {

bool valid(double side1, double side2, double side3) {
    return side1 > 0 && side2 > 0 && side3 > 0 &&
       side1 + side2 >= side3 &&
       side1 + side3 >= side2 &&
       side2 + side3 >= side1;
}

flavor kind(double side1, double side2, double side3) {
    if (!valid(side1, side2, side3)) {
        throw std::domain_error("invalid triangle");
    }

    if (side1 == side2 && side2 == side3) {
        return flavor::equilateral;
    }

    if (side1 == side2 || side1 == side3 || side2 == side3) {
        return flavor::isosceles;
    }

    return flavor::scalene;
}
}  // namespace triangle
