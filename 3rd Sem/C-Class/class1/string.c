#include <stdio.h>


void printStr(char  arr[]);
int main() {

   char fstName[] = {"Niraj"};
   char lstName [] = {"Gupta"};

    //printStr(fstName);
   // printStr(lstName);


//next question ________________________________________________________________________


     return 0;
}



void printStr(char  arr[]) {
    for (int i=0; arr[i] != '\0'; i++){
        printf("%c", arr[i]);
    }
    printf("\n");
}
