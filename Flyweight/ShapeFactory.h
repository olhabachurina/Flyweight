#pragma once
#include "SharedAttributes.h"
#include <memory>
#include "Circle.h"  // ���������� ��������� �����

class ShapeFactory {
public:
    ShapeFactory(const SharedAttributes& sharedAttributes)
        : sharedAttributes_(sharedAttributes) {}

    std::shared_ptr<Shape> createCircle(double radius);

private:
    SharedAttributes sharedAttributes_;
};
