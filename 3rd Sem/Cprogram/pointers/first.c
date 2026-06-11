#include <stdio.h>


int main() {
    
    int a = 5;

    int* ptr = &a;

    int **ptr =ptr;

    printf(" a: %d \n", a);
   
    printf("ptr: %p \n", ptr);
    printf("ptr: %p \n", *ptr);


    return 0;
}