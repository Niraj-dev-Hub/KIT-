#include <stdio.h>
#include <math.h> //-lm needed in terminal while execution

// a.write a function to find the sum of digits of a number
// b. write a function to find the square root of a number
// c. write a function to print "hot" or "cold" according to the temp given by a user  
// d. make your own power function

int main()
{
    // q no a to print the sum of digit

    /* int n, sum=0;

     printf("Enter a Num:");
     scanf("%d", &n);

     for(int i=1; i<=n; i++) {
         sum += i;

     }
     printf("Sum: %d \n", sum);

  */

    // q 2 wap to find the square of a num
    double n;
    printf("Enter a Num:");
    scanf("%le", &n);

    double num = 0.5;
    double root = pow(n, num);

    printf("%f \n", root);

    return 0;
}