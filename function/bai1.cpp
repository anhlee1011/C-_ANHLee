#include <iostream>
#include <cmath>
void show_health(float w, float h)
{
    float bmi = w / (h*h);

    if(bmi<=18.5)
    {
        std::cout << "Thieu can!";
    }
    else if(bmi > 18.5 && bmi < 24.5)
    {
        std::cout << "binh thuong";
    }
    else
        std::cout << "Thua can!";
    return;
    
  
        
   
}
int main()
{
    float height = 1.72;
    float weight = 54;
    std::cout << "Nam 1: ";
    show_health(weight, height);
    std::cout << "\nNam 2: ";
    weight += 20;
    show_health(weight, height);
}