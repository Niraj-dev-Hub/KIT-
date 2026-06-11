#include <stdio.h>
#include<math.h>

int main() {
    int Id[5];

    //input 
   // int *ptr= &Id[0];

    for(int i =0; i<5; i++){
        printf("%d index: ", i);
        scanf("%d", &Id[i]);
    }
 
    for(int i=4; i>0; i--) {
        printf("%d index = %d \n",i, Id[i]);
    }


    return 0;
}