#include <iostream>
int main()
{
	int n;
	std::cout << "Nhap n: "; std::cin >> n;
	int m;
	std::cout << "Nhap m: "; std::cin >> m;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= m; j++)
		{ 
			if (i == 1 || i == n || j == 1 || j == m)
			{
				std::cout << "* ";
			}
			else
				std::cout << "  ";
		}
		std::cout << "\n";
	}
	// ở câu 3 thì m và n khi nhập phải là số lẻ
	int a;
	std::cout << "Nhap a: "; std::cin >> a;
	int b;
	std::cout << "Nhap b: "; std::cin >> b;
	for (int i = 1; i <= a; i++)
	{
		for (int j = 1; j <= b; j++)
		{
			if (i % 2 != 0 || j % 2 != 0)
			{
				std::cout << "* ";
			}
			else
				std::cout << "  ";

		}
		std::cout << "\n";
	}
}