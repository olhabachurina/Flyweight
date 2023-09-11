#include "Circle.h"

#include <iostream>

void Circle::draw() const {
    std::cout << "Drawing a circle (Color: " << attributes_.getColor() << ", Line thickness: " << attributes_.getLineThickness() << ")" << std::endl;
}