#include <stdio.h>
#include <string.h>


int main() {
    //file reading
//     FILE *ptr = fopen("nir.txt","r");
//     char str[100];
//   while( fgets(str,100,ptr) != NULL){
//     printf("%s ", str);
//    }

//creating file.
// FILE *ptr = fopen("helo.txt","w");

// //writing
//  char str[] = " Hi, I am a boy.";
//  fputs(str,ptr);
//  fclose(ptr);



//student file

FILE* ptr;


int age;
char name[50], address[20];

ptr = fopen("student.txt","w");

printf("Enter your name: ");
scanf("%s ", name);

printf("Enter your age: ");
scanf("%d ", &age);

printf("Enter your address: ");
scanf("%s ", address);


 fprintf(ptr, "%d %s  %s\n", age, name, address);
 fclose(ptr);

ptr= fopen("student.txt", "r");

while(fscanf(ptr, "%d %s %s ", age, name, address) != NULL){
   printf(ptr, "%d %s  %s\n", age, name, address);
}

fclose(ptr);


    return 0;
}