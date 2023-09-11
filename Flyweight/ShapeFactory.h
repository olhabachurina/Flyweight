#pragma once
#include "SharedAttributes.h"
#include <memory>
#include "Circle.h"  // Подключаем зависимый класс

class ShapeFactory {
public:
    ShapeFactory(const SharedAttributes& sharedAttributes)
        : sharedAttributes_(sharedAttributes) {}

    std::shared_ptr<Shape> createCircle(double radius);

private:
    SharedAttributes sharedAttributes_;
};
