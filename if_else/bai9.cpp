#include <iostream>
#include <cmath>

bool laSoChinhPhuong(int n) {
    int squareRoot = sqrt(n);
    return squareRoot * squareRoot == n;
}

int main() {
    int n;
    std::cout << "Nhap mot so: ";
    std::cin >> n;

    if (laSoChinhPhuong(n)) {
        std::cout << n << " la so chinh phuong.";
    } else {
        std::cout << n << " khong la so chinh phuong.";
    }

    return 0;
}