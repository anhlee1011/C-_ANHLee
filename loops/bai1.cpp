#include <iostream>
int main()
{
    int n;
    std::cout << "Nhap n: "; std::cin >> n;
    std::cout << "ket qua 1: ";
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0) std::cout << " " << i << " ";

    }
    std::cout << "\nket qua 2: ";
    for (int j = 1; j <= n; j++)
    {
        if (j % 3 == 0) std::cout << " " << j << " ";

    }
    std::cout << "\nket qua 3: ";
    for (int k = 1; k <= n; k++)
    {
        if (k % 3 == 0 && k % 2 != 0) std::cout << " " << k << " ";

    }
    std::cout << "\nket qua 4: ";
    for (int y = -n; y <= n; y++)
    {
        if (y % 5 == 0) std::cout << " " << y << " ";

    }
}