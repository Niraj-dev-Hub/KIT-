#include <stdio.h>
#include<math.h>

void rectangle(int a , int b){
    int i ,j ;

    for(i=1;  i <=a; i++){

        for(j=1; j<=b; j++){
            printf("*");
        }

        printf(" \n");

    }
}

int main(){
    
    int rows, columns;

    printf("Enter the number of Rows: ");
    scanf("%d", &rows  );

    printf("Enter the number of columns: ");
    scanf("%d", &columns );

    printf(" \n");

     rectangle(rows,columns);


     
   
    
    return 0;
}

