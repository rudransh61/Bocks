#include "Vector2D.h"
#include<iostream>
Vector2D::Vector2D() : x(0.0), y(0.0) {}

Vector2D::Vector2D(double x, double y) : x(x), y(y) {}

Vector2D Vector2D::operator+(const Vector2D& other) const {
    return Vector2D(x + other.x, y + other.y);
}

Vector2D Vector2D::operator-(const Vector2D& other) const {
    return Vector2D(x - other.x, y - other.y);
}
Vector2D Vector2D::operator*(const double& scale) const {
    return Vector2D(x * scale, y*scale);
}
double Vector2D::dot(const Vector2D& other) const {
    return x * other.x +y* other.y;
}

void Vector2D::print() const {
    std::cout << "(" << x << ", " << y << ")";
}
