#include <stdio.h>

int main(){ 

    int n, table;
    printf("Enter the number:");
    scanf("%d", &n);

   
    for(int i=10; i>=1; i--){
        table = i*n;
     printf("%d \n", table);
    }


    return 0;
}

