#include <iostream>

int tinhTienCuocTaxi(int km) {
    if (km <= 0) {
        return 0;
    } else if (km == 1) {
        return 15000;
    } else if (km >= 2 && km <= 30) {
        return 15000 + (km - 1) * 13000;
    } else {
        return 15000 + 29 * 13000 + (km - 30) * 10000;
    }
}

int main() {
    int km;
    std::cout << "Nhap so km: ";
    std::cin >> km;
    int tienCuoc = tinhTienCuocTaxi(km);
    std::cout << "So tien phai tra: " << tienCuoc << std::endl;
    
    return 0;
}