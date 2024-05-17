#include <iostream>
#include <cmath>

bool isTriangle(float a, float b, float c) {
    return (a + b > c) && (a + c > b) && (b + c > a);
}

bool isRightTriangle(float a, float b, float c) {
    float eps = 1.0; // Độ lệch xấp xỉ cho phép
    return (fabs(a * a + b * b - c * c) < eps) ||
           (fabs(a * a + c * c - b * b) < eps) ||
           (fabs(b * b + c * c - a * a) < eps);
}

bool isIsoscelesTriangle(float a, float b, float c) {
    float eps = 1.0; // Độ lệch xấp xỉ cho phép
    return (fabs(a - b) < eps) || (fabs(b - c) < eps) || (fabs(a - c) < eps);
}

bool isEquilateralTriangle(float a, float b, float c) {
    float eps = 1.0; // Độ lệch xấp xỉ cho phép
    return (fabs(a - b) < eps) && (fabs(b - c) < eps) && (fabs(a - c) < eps);
}

int main() {
    float a, b, c;
    std::cout << "Nhap canh a: ";
    std::cin >> a;
    std::cout << "Nhap canh b: ";
    std::cin >> b;
    std::cout << "Nhap canh c: ";
    std::cin >> c;

    if (!isTriangle(a, b, c)) {
        std::cout << "Tam giac nay khong ton tai" << std::endl;
    } else if (isEquilateralTriangle(a, b, c)) {
        std::cout << "Tam giac deu" << std::endl;
    } else if (isIsoscelesTriangle(a, b, c)) {
        if (isRightTriangle(a, b, c)) {
            std::cout << "Tam giac vuong can" << std::endl;
        } else {
            std::cout << "Tam giac can" << std::endl;
        }
    } else if (isRightTriangle(a, b, c)) {
        std::cout << "Tam giac vuong" << std::endl;
    } else {
        std::cout << "Tam giac thuong" << std::endl;
    }

    return 0;
}