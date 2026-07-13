#pragma once

namespace triangle {

enum class flavor {
    equilateral,
    isosceles,
    scalene
};

    flavor kind(double side1, double side2, double side3);
}  // namespace triangle
