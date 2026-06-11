#include <stdio.h>
#include<math.h>

  void  doWork(int a, int b , int *sum, int *product, int *avg);

int main() {
    int a , b;
    printf("Enter value of a: ");
    scanf("%d", &a);
    printf("Enter value of a:");
    int sum, product, avg;
    scanf("%d", &b);

    doWork(a, b, &sum, &product, &avg);
    printf("sum= %d, product= %d, avg= %d \n", sum, product, avg);


    return 0;
}

  void  doWork(int a, int b , int *sum, int *product, int *avg){
    *sum = a+b;
    *product = a*b;
    *avg = (a+b)/2;
  }
