#include <iostream>
#include <cmath>
int main()
{
	/*Nhập n là số tự nhiên từ 0 đến 9. Sử dụng vòng lặp for hoặc while tùy thích để vẽ các hình sau:
1 - Hình vuông có n lớp, tâm 0, tỏa dần từ 0 đến n
2 - Hình thoi có n lớp, tâm 0, tỏa dần từ 0 đến n
Xem hình minh họa để rõ yêu cầu đề bài
Lưu ý:
- Càng dùng ít vòng for càng đc đánh giá cao*/
int n;
std::cout << "Nhap n: "; std::cin >> n;
int m = 2*n;
int sum = m+1 ;
std::cout << "Cau 1: " << "\n";
	for (int i = 0; i <= 2 * n; i++)
	{
		for (int j = 0; j <= 2 * n; j++)
		{
			if (i <= n)
			{
				if (j >= i && j <= 2 * n - i)
				{

					std::cout << abs(n - i) << " ";
				}
				else
					std::cout << abs(n - j) << " ";
			}
			else
			{
				if (j <= i && j >= 2*n - i)
				{
					std::cout << i - n << " ";
				}
				else
					std::cout << abs(n - j) << " ";
			}
		}
		std::cout << "\n";
	}
//Bai_2
std::cout << "Cau 2: " << "\n" ;
for (int i = 0; i <=  m; i++)
{
	sum--;
	for (int j = 0; j <= m; j++)
	{
		if (i <= n)
		{
			if (j==n)
			{
				std::cout << abs(n - i) << " ";
			}
			else
			{
				if(j >= n - i && j <= n + i)
					std::cout << abs(n - j) + abs(n - i) << " ";
				else
					std::cout << "  ";
			}
				
		}
		else
		{
			if (j == n)
			{
				std::cout << abs(n - i) << " ";
			}
			else
			{
				if (j >= n - sum && j <= n + sum)
					std::cout << i - n + abs(n - j) << " ";
				else
					std::cout << "  ";
			}
				
		}
	}
	std::cout << "\n";
}

}