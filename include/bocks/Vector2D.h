#ifndef VECTOR2D_H
#define VECTOR2D_H

class Vector2D {
public:
    double x;
    double y;

    // Constructors
    Vector2D();
    Vector2D(double x, double y);

    // Overloaded operators
    Vector2D operator+(const Vector2D& other) const;
    Vector2D operator-(const Vector2D& other) const;
    Vector2D operator*(const double& scale) const;
    double dot(const Vector2D& other) const;

    // Display the vector
    void print() const;
};

#endif
