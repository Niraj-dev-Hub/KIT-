#include <stdio.h>

//WAP in C to find the sum of all natural number from 1 to 20

int main(){

    int n, sum=0;
    printf("Enter a number To print the sum of n natural number:");
    scanf("%d", &n);

    for(int i= 0; i<=n; i++){
        sum = sum +i;
    }
    printf("%d \n", sum);

   
    
    return 0;
}

