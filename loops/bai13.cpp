#include <iostream>
#include <iostream>
int main()
{
	int n;
	std::cout << "Nhap n: "; std::cin >> n;
	int m;
	std::cout << "Nhap m: "; std::cin >> m;
	//Bai_1
	std::cout << "Bai 1\n";
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <=m ; j++)
		{
			if (j <= n - i || j >= n + i)
				std::cout << "  ";
			else
				std::cout << "0 ";
		}
		std::cout << "\n";
	}
	std::cout << "\n";
	//bai_2
	std::cout << "Bai 2\n";
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <=m ; j++)
		{
			if (j <= n - i || j >= n + i)
				std::cout << "  ";
			else if (j == n - i + 1 || j == n + i - 1 || i == n)
				std::cout << "1 ";
			else
				std::cout << "0 ";
		}
		std::cout << "\n";
	}
	std::cout << "\n";
	//bai_3
	std::cout << "Bai 3\n";
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <=m ; j++)
		{
			if (j <= n - i || j >= n + i)
				std::cout << "  ";
			else if ((i%2==0&&j%2!=0)||(j % 2 == 0 && i % 2 != 0))
				std::cout << "1 ";
			else
				std::cout << "0 ";
		}
		std::cout << "\n";
	}
	std::cout << "\n";
	//Bai_4
	std::cout << "Bai 4\n";
	for (int i = 0; i <= n; i++)
	{
		for (int j = 0; j <= m ; j++)
		{
			if (j <= n - i || j >= n + i)
				std::cout << "  ";
			else
				std::cout << i -1 << " ";
		}
		std::cout << "\n";
	}
	std::cout << "\n";
	//Bai 5
	std::cout << "Bai 5\n";
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= m ; j++)
		{
			if ((j > n - i && j < n + i))
			{
				if (j == n)
					std::cout << i - 1 << " ";
				else
					std::cout << abs(abs(n-j) - i) -1  << " ";
			}
			else
				std::cout << "  ";
		}
		std::cout << "\n";
	}

}
	 