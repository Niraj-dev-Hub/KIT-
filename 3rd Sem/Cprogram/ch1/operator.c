#include<stdio.h>

int main () {

    /*int x;
     printf("enter a number:");
     scanf("%d", &x);
     printf("%d\n", (x>9) &&(x<100)); */

  /*  Q.1  write a program to print the avg of 3 numbers
   int a,b,c;
   a= 3;
   b=4;
   c=7;

   int avg = (a+b+c)/3;
   printf("the avg is : %d\n", avg);
   

   */


  // Q.2 write a program to check if a given character is a digit or not 
    char ch;
    printf("enter a character:");
    scanf("%c", &ch);

    printf("The character is digit: %d\n", (ch>='0') && (ch<= '9'));


}