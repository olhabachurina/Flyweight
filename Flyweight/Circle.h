#pragma once
#include "Shape.h"

class Circle : public Shape {
public:
    Circle(const SharedAttributes& attributes, double radius)
        : attributes_(attributes), radius_(radius) {}

    void draw() const override;

private:
    SharedAttributes attributes_;
    double radius_;
};
