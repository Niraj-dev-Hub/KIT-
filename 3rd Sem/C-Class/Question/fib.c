#include <stdio.h>

int main(){
    
    int n, x=0, y=1, z;
    printf("Enter a number: ");
    scanf("%d", &n );

    for(int i=1; i<=n; i++){
        printf("%d ", x);

        z = x+y;
        x=y;
        y=z;
    }
   printf("\n");
   
    
    return 0;
}

