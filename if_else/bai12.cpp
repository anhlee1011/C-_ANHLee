#include <iostream>
#include <cmath>
int main()
{
    float toan, ly, hoa, van, anh, su, dia;
    std::cout << "Nhap diem: "; std::cin >> toan >> ly >> hoa >> van >> anh >> su >> dia;
    float sum = toan + ly + hoa + van + anh + su + dia;
    float mean = (sum )/7;
    if(mean >=0 && mean <= 10)
    {
        if(mean>=8)
        {
            if(toan < 4 || ly < 4 || hoa < 4 || van < 4 || anh < 4 || su < 4 || dia < 4) std::cout << "Hoc sinh kha";
            else std::cout << "Hoc sinh gioi";
        }
        else if(mean>=6.5 && mean < 8)
        {
            if(toan < 3 || ly < 3 || hoa < 3 || van < 3 || anh < 3 || su < 3 || dia < 3) std::cout << "Hoc sinh trung binh";
            else std::cout << "Hoc sinh kha";
        }
         else if(mean>=4 && mean < 6.5)
        {
            if(toan == 0 || ly == 0 || hoa == 0 || van == 0 || anh == 0 || su == 0 || dia == 0) std::cout << "Hoc sinh yeu";
            else std::cout << "Hoc sinh trung binh";
        }
        else std::cout << "Hoc sinh yeu";

    }
    else std ::cout << "Khong hop le";
}