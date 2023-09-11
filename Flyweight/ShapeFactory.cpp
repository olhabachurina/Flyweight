#include "ShapeFactory.h"
#include "Circle.h"  

std::shared_ptr<Shape> ShapeFactory::createCircle(double radius) {
    return std::make_shared<Circle>(sharedAttributes_, radius);
}