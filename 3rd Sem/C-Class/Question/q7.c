#include <stdio.h>

//WAP in C to input a number and calculate the factorial of that number


int main(){
    int n, fact=1;

    printf("Enter the number n to print the factorial: ");
    scanf("%d", &n);

    for(int i=1; i<=n; i++){
        fact = fact*i;
    }
    printf("Factorial: %d \n", fact);
    

   
    
    return 0;
}

