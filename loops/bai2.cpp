#include <iostream>
#include <cmath>
int main()
{
    int n;
    std::cout << "Nhap n: "; std::cin >> n;
    int P = 0;
    int Q = 1;
    int R = 0;
    int S = 0;
    float T = 0;
    int U = 0;
    int V = 0;
    int a = 0;
    int X = 0;
    for (int i = 1; i <= n; i++)
    {
        P += i;
        Q *= i; 
        S += pow(i, 3);
        T += i / pow(i, i);
        U += i * (i + 1);
        a += pow(10, i - 1);
        V += a;
        X += P;
        if (i % 2 == 0) continue;
        R += i;

    }
    std::cout << P << "\n";
    std::cout << Q << "\n";
    std::cout << R << "\n";
    std::cout << S << "\n";
    std::cout << T << "\n";
    std::cout << U << "\n";
    std::cout << V << "\n";
    std::cout << X << "\n";
}