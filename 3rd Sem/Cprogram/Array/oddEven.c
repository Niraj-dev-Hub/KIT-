#include <stdio.h>

//write a program to input mxn matrix and find the summ of all odd and even 
int main() {
    int m,n,i,j;
    int a[10][10];
    int even=0, odd=0;

    printf("Enter the row and column: ");
    scanf("%d %d", &m, &n);

    for(i=0; i<m; i++)
     {
        for(j=0; j<n; j++){
            scanf("%d", &a[i][j]);

            if(a[i][j] %2 == 0){
                even= even + a[i][j];

            }else{
                odd = odd + a[i][j];
            }
        }
     }

     printf("Sum of all Even Number: %d \n", even);
     printf("Sum of all odd Number: %d \n", odd);
    return 0;
}