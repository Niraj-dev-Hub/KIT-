#include <stdio.h>
//write a program to input 10 integer number and find out the average of them.

int main() {
    int i,j;
    int sum = 0;
    int arr[10];
   
    printf("Enter 10 Numbers: ");

    for( i=0; i<10; i++){
        scanf("%d ", &arr[i]);
    
    }
     for( j=0; j<10; j++){
        printf("%d  \t", arr[j]);
        sum = sum + arr[j];
    }

     float avg = sum/10;
       printf("\n");
    

      printf("sum value:  %d\n", sum);
      printf("Average value: %f \n", avg);



    
    



    return 0;
}