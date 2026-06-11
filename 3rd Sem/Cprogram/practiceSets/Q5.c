#include <stdio.h>

int main(){
    
//print all the number 1-10 except 5


//    for (int i=1; i<=10; i++){
//     if(i==6){
//         continue;
    
//     }

//     printf("%d\n", i);
//    }
  

// print all the odd number from 5 - 50
  
// for (int i=1; i<=50; i++){
//     if (i%2==0){
//         continue;
//     }
//     printf("%d\n",i);
// }


//print the factorial of n

int n;
printf("Enter the number:");
scanf("%d",&n);
 int fact=1;

for (int i=1; i<=n; i++){
    fact *= i;
   // printf("%d\n", fact);
  
}
 printf("Factorial is: %d \n ", fact);
 
    return 0;
}