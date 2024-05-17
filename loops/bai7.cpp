#include <iostream>

int main() {
    int n;
    std::cout << "Nhap n: ";
    std::cin >> n;
    
    float a = 0;
    for (float i = 1; i <= n; i++) {
        if (i >= 5) {
            a += 2 * i * i + 5 * i + 9;
        } else {
            a += -2 * i * i + 4 * i - 9;
        }
    }
    
    std::cout << "Ket qua: " << a;
    
    return 0;
}