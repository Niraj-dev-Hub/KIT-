#include<stdio.h>
 
 void printHello();  //function declaration/prototype
 void printBye();
   
  int main (){
   printHello(); //function call
   printBye();

   
    return 0;
  }

  void printHello(){                //function defination
    printf("Hello world! \n");
  }


  void printBye(){
    printf("Good Bye!\n");
  }