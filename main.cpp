#include "include\bocks\Vector2d.h"
#include <iostream>

int main() {
    Vector2D vector1(3.0, 4.0);
    Vector2D vector2(1.0, 2.0);

    std::cout << "Vector 1: (" << vector1.x << ", " << vector1.y << ")" << std::endl;
    std::cout << "Vector 2: (" << vector2.x << ", " << vector2.y << ")" << std::endl;

    Vector2D sum = vector1 + vector2;
    Vector2D difference = vector1 - vector2;
    Vector2D scale = vector1*3;
    double dot = vector1.dot(vector2);
    std::cout << "Vector 1 * Vector 2: " << dot << std::endl;
    std::cout << "Vector 1 + Vector 2: (" << sum.x << ", " << sum.y << ")" << std::endl;
    std::cout << "Vector 1 - Vector 2: (" << difference.x << ", " << difference.y << ")" << std::endl;
    std::cout << "Vector 1 * 3: (" << scale.x << ", " << scale.y << ")" << std::endl;

    return 0;
}
