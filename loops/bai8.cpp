
#include <iostream>

int main() {
    int n;
    std::cout << "Nhap 1 so nguyen duong n: ";
    std::cin >> n;

    // 1 - In ra cac chu so dao nguoc cua n
    int reversed = 0;
    int temp = n;
    while (temp > 0) {
        int digit = temp % 10;
        reversed = reversed * 10 + digit;
        temp /= 10;
    }
    std::cout << "Cac chu so dao nguoc cua n: " << reversed << std::endl;

    // 2 - Tinh so chu so co trong so n
    int digitCount = 0;
    temp = n;
    while (temp > 0) {
        temp /= 10;
        digitCount++;
    }
    std::cout << "So chu so cua n: " << digitCount << std::endl;

    // 3 - Tinh tong cac chu so cua n
    int digitSum = 0;
    temp = n;
    while (temp > 0) {
        int digit = temp % 10;
        digitSum += digit;
        temp /= 10;
    }
    std::cout << "Tong cac chu so cua n: " << digitSum << std::endl;

    // 4 - Nhap vi tri cua chu so muon lay
    int position;
    std::cout << "Nhap vi tri cua chu so muon lay: ";
    std::cin >> position;
    
    // Tim chu so tai vi tri da cho
    int currentPosition = 1;
  
    while (reversed > 0) {
        int digit = reversed % 10;
        if (currentPosition == position) {
            std::cout << "Chu so tai vi tri " << position << ": " << digit << std::endl;
            break;
        }
        reversed /= 10;
        currentPosition++;
    }
    if (currentPosition != position) {
        std::cout << "Ko ton tai vi tri nay" << std::endl;
    }

    return 0;
}