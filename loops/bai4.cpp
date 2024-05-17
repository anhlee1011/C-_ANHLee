#include <iostream>
int main()
{
    int a, b;
    std::cout << "Nhap a: "; std::cin >> a;
    std::cout << "Nhap b: "; std::cin >> b;
    int UCmax = 0;
    for (int i = 1; i <= a && i <= b; i++)
    {
        if (a % i == 0 && b % i == 0)
        {
            if (i > UCmax)
                UCmax = i;
        }
    }
    int BCmin = (a * b) / UCmax;
    std::cout << "UCLN la: " << UCmax;
    std::cout << "\n";
    std::cout << "BCNN la: " << BCmin;
    
}