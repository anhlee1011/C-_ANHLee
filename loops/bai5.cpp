#include <iostream>
int main()
{
    int n;
    std::cout << "Nhap n: "; std::cin >> n;
    int total = 0;
    for (int i = 1; i < n; i++)
    {
        if (n % i == 0) {
            std::cout << i << " ";
            total += i;
        }
    }
    std::cout << "\n";
    if (total == n) std::cout << n << " la so hoan hao ";
    else std::cout << n << " khong la so hoan hao";
}