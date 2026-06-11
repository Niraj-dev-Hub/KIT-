#include <stdio.h>

int main(){
    
//print the sum of first n natural numbers
   int n, sum=0;

   printf("Enter a number:");
   scanf("%d",&n);

   for(int j=1; j<=n; j++){
    sum =sum + j;
    printf("%d\n", sum);
   }
   //printf("Sum is:%d \n", sum);

//    for(int i=n; i>=1; i--){
//     printf("%d \n", i);
//    }


    return 0;
}