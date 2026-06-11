#include <stdio.h>
#include<math.h>

float areaSq(float side);
float areaCir(float rad);
float areaRect(float a , float b); 

int main() {
    float a =4.0, b = 6.0;
    float rad = 8.0;
    float side = 5.0;

   float square = areaSq(side);
   float circle = areaCir(rad);
   float rectangle=  areaRect(a,b);
    
   printf("  area of rectangle is :%.2f \n ", rectangle );
   printf("  area of circle is :%.2f \n ", circle );
   printf("  area of square is :%.2f \n ", square );


    return 0;
}

float areaRect(float a, float b){
    return a * b;
}


float areaCir(float rad){
    return 3.14 * rad * rad;
}

float areaSq(float side) {
    return side * side;
}
