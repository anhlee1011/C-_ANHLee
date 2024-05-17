#include <iostream>
int main()
{
    int n;
std::cout << "Nhap n: "; std::cin >> n;
int total = 0;
int tong = 0;
for (int i = 1; i < n; i++)
{

    total+=i;
    tong++;
    if (total > n)
        break;
}
std::cout << "X nho nhat la: " << tong;
}