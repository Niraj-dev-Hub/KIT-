#include <stdio.h>


int main() {
    
    int *ptr1, *ptr2;

    printf("enter first number: ");
    scanf("%d", ptr1);

    printf("enter second number: ");
    scanf("%d", ptr2);

    int sum =  *ptr1 + *ptr2;

    printf("sum: %d \n", sum);


    return 0;
}