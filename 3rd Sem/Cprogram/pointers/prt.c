#include <stdio.h>
#include<math.h>

//  q.1. write a program to print the maximum number betn two numbers using pointers
// q.2 write a program to print english alphabet using pointers


void maxNum(int *a, int *b);
void alpha();

int main() {
    int a=5, b=6 ;

    //maxNum(&a, &b);
    alpha();


    return 0;
}

void maxNum(int *a, int *b){
    if(*a>= *b) {
        printf("%d", *a);
        printf( " is greater  Number \n" );

    }else{
         printf("%d", *b);
        printf( " is greater Number \n");

    }
}

void alpha() {
    for(int i = 'A'; i<='Z'; i++ ){
        printf("%c \n", i);
    }
}