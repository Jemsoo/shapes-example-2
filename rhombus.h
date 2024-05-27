//
// Created by citygirls on 5/26/24.
//

#ifndef SHAPES_EXAMPLE_1_RHOMBUS_H
#define SHAPES_EXAMPLE_1_RHOMBUS_H

#include "rectangle.h"

class rhombus : public Rectangle {
public:
    rhombus(double sideLength, double angle);
    virtual std::string ToString() const;
private:
    double _angle;
};


#endif //SHAPES_EXAMPLE_1_RHOMBUS_H
