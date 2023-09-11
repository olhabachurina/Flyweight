#pragma once
#include <string>

class SharedAttributes {
public:
    SharedAttributes(const std::string& color, int lineThickness)
        : color_(color), lineThickness_(lineThickness) {}

    const std::string& getColor() const {
        return color_;
    }

    int getLineThickness() const {
        return lineThickness_;
    }

private:
    std::string color_;
    int lineThickness_;
};

