#include <stdio.h>
#include<math.h>

float convertTemp(float c);


int main() {
    
    float c;
    printf("Enter Temp in celsius:");
    scanf("%f", &c);
    float far = convertTemp(c);
    
    printf("Temp in farenhit is :%.2f \n", far);
    

    return 0;
}

float convertTemp(float c){
   float far = c *(9.0/5.0) +32;
   return far;

}
