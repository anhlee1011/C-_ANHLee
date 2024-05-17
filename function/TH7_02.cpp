#include <iostream>
#include <cmath>
float degree(float iu){
   float f = (iu*9/5)+32;
   return f;
}
int main(){
   std::cout << "Ket qua 1:\n";
   for(int i = 0 ;i<=10;i++){
    std::cout << "\t\t" << i << "(C) = " << degree(i) <<" (F)\n";
   }
}