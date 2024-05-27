//
// Created by citygirls on 5/26/24.
//

#include "equilateral.h"
#include <sstream>

equilateral::equilateral(double sideLength) : Triangle(sideLength, sideLength, sideLength) {}

std::string equilateral::ToString() const {
    std::stringstream ss;
    ss << "{Equilateral Triangle " << Shape::ToString() << " side length: " << _a << "}";
    return ss.str();
}