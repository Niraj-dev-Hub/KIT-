#include <stdio.h>

//WAP in C to determine the greatest number among three numbers

int main(){
    int a,b,c;
    printf("Enter Three number :");
    scanf("%d %d %d", &a, &b, &c);

    if(a>b){
        printf("The greates Number among all is: %d", a);

    } else if(b>c){
       printf("The greates Number among all is: %d", b);

    }
    else{
       printf("The greates Number among all is: %d", c);

    }
    printf("\n");

   

   
    
    return 0;
}

