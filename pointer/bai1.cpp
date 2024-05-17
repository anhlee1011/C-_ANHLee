#include<iostream>
#include<string>
using namespace std;
int main()
{
  /*Nhập giá trị cho các biến số nguyên x1, x2, x3, x4. 
  Cho DUY NHẤT 1 biến pointer (int*) là p.
1 - In ra tất cả các giá trị của x1, x2, x3, x4 thông qua biến p 
2- In ra trung bình nhân của x1, x2, x3, x4 thông qua biến p.
Lưu ý: ko được truy cập trực tiếp vào vùng dữ liệu của x1, x2, x3, x4 
nhưng được phép lấy địa chỉ của 4 biến này
Chương trình cần chạy được như hình minh hoạ*/
int x1, x2, x3, x4;
cout << "Nhap lan luot x1, x2, x3, x4: ";
cin >> x1 >> x2 >> x3 >> x4;
int &r = x1;
int &t = x2;
int &y = x3;
int &u = x4;
int *p = &r;
cout << "Ket qua 1: " << *p << " ";
p = &t;
cout << *p << " ";
p = &y;
cout << *p << " ";
p = &u;
cout << *p << "\n";
int sum = (r * t * y * u)/4;
p = &sum;
cout << "Ket qua 2: " << *p << " ";


  
}