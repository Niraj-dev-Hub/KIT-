#include <stdio.h>

// 3.WAP in C to print the following pattern
// 1
// 1 0
// 1 0 1 0
// 1 0 1 0 1
// 1 0 1 0 1 0


int main(){
    
    for (int i= 0; i<= 6; i ++ ){
        if(i ==3){
                continue;
            }
      
        for(int j=0; j<i; j++){
            if(j %2 == 0){
                printf("1 ");

            }else {
                printf("0 ");
            }
            
        }
         printf("\n");


        

    }

    

    printf("\n \n \n");
    
// 1 2 3 4 5
// 1 2 3 4
// 1 2 3
// 1 2 
// 1

for(int i=5; i>=1; i--){
    for(int j=1; j<=i; j++){
        printf("%d ",j);
    }

    printf("\n");
   
    
}

   

   
    
    return 0;
}

