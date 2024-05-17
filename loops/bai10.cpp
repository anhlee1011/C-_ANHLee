#include<iostream>
int main()
{
	int n;
	std::cout << "Nhap n: "; std::cin >> n;
	for (int i = 0; i <= 2*n; i++)
	{
		for (int j = 0; j <= 2*n; j++	)
		{
			if (j >= n - 1 && j <= n + i) {
				std::cout << "* ";
			}
		}
		std::cout << "\n";
	}

}