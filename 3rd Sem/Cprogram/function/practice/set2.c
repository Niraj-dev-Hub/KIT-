#include <stdio.h>

//write a function to print namaste if a persion is indian and
// print bonjour if french

void namaste();
void bonjour();


int main() {

    char ch;

    printf("Enter i for indian and f for french :");
    scanf("%c",&ch);
    
    if(ch =='i'){
       namaste();
     }else {
        bonjour();
    }

    return 0;
}

void namaste(){
    printf("Namaste :) \n");
}

void bonjour(){
    printf("Bonjour :) \n");
}