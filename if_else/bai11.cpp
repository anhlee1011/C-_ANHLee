#include <bits/stdc++.h>
int main()
{
    float h1=100;
    float h2=150;
    float h3=120;
    float h4=90;
    float h5=130;
    float h6=140;
    float a, b, c, d, e, f;
    std::cout << "Nhap lan luot so luong 6 mat hang: ";
    std::cin >> a >> b >> c >> d >> e >> f;
    float sum = a+b+c+d+e+f;
    float price = a * h1 + b * h2 + c * h3 + d * h4 + e * h5 + f * h6;
    if(sum>=4)
    {
        if(f>=2 && price > 500)//(1) && (2) && (3)
        {
            std::cout << "So tien phai tra: " << price - price * 0.2;
        }
        else if (f>=2)//(1) && (2)
        {
            std::cout << "So tien phai tra: " << price - 40;
        }
        else if (price > 500)//(1) && (3)
        {
            std::cout << "So tien phai tra: " << price - price * 0.15;
        }
        else std::cout << "So tien phai tra: " << price - 20;//(1)
        
    }
    else if (f>=2) std::cout << "So tien phai tra: " << price - 30;//(2)
    else std::cout << "So tien phai tra: " << price; 
   
      


}