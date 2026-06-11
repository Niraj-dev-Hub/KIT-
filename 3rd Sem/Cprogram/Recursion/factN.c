#include <stdio.h>
#include<math.h>

int fact(int n);

int main() {
    
    int n;
    printf("Enter a num:");
    scanf(" %d", &n);


    printf("Factorial of n is: %d \n", fact(n));


    return 0;
}

int fact(int n) {

    if(n==0) {
        return 1;
    }

    int factNm1 = fact(n-1);
    int factN= factNm1*n;
    return factN;
}