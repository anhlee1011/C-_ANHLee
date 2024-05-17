#include<iostream>
int main()
{
	int n;
	std::cout << "Nhap n: "; std::cin >> n;
	for (int i = 0; i <= n; i++)
	{
		for (int j = 0; j <= n; j++)
		{
			if (j >= n - i) {
				if (j == n - i || i == n||j==n )
					std::cout << " 1";
				else
					std::cout << " 0";
			}
			else
				std::cout << "  ";
		}
		std::cout << "\n";
	}
}