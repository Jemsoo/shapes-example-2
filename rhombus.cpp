//
// Created by citygirls on 5/26/24.
//

#include "rhombus.h"
#include <sstream>

rhombus::rhombus(double sideLength, double angle) : Rectangle(sideLength, sideLength), _angle(angle) {}

std::string rhombus::ToString() const {
    std::stringstream ss;
    ss << "{Rhombus " << Rectangle::ToString() << " side length: " << _base << ", angle: " << _angle << "}";
    return ss.str();
}
