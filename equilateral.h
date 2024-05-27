//
// Created by citygirls on 5/26/24.
//

#ifndef SHAPES_EXAMPLE_1_EQUILATERAL_H
#define SHAPES_EXAMPLE_1_EQUILATERAL_H

#include "triangle.h"

class equilateral : public Triangle {
public:
    equilateral(double sideLength);
    virtual std::string ToString() const;
};


#endif //SHAPES_EXAMPLE_1_EQUILATERAL_H
