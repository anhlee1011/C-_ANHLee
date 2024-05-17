#include <iostream>
int main()
{
    int n;
    std::cout << "Nhap n: ";
    std::cin >> n;
    int dem = 0;
    std::cout << "Ket qua 1: ";
    bool check = true;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            std::cout << i << " ";
            dem++;
            check = false;

        }
     
    }
    std::cout <<"\nKet qua 2: " << dem;
    if (check = true && n>=2) std::cout << "\nKet qua 3: " << n << " La so nguyen to";
    else std::cout << "\nKet qua 3: " << n << " khong phai so nguyen to";
}