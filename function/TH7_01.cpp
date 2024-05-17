#include <iostream>
#include <cmath>
float program_1(float a1, float b1, float c1){
    float sum = (a1+b1+c1)/3;
    return sum;
}
float program_2(float a2, float b2, float c2){
    int max = a2;
    if(b2>max)
        max=b2;
    if(c2>max)
        max=c2;

    return max;

}

int main()
{
    int a,b,c;
    std::cout << "Nhap 3 so a,b,c: " << "\n";
    std::cin >> a >> b >> c;
    std::cout << "Ket qua 1: " <<   program_1(a,b,c);
    std::cout << "\nKet qua 2: " <<  program_2(a,b,c);
}