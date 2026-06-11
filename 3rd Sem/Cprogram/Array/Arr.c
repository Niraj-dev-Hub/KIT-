#include <stdio.h>
#include<math.h>

int main() {
    int marks[3];

    printf("Enter the marks of Given Subject \n");

    printf("Phyics:");
    scanf("%d", &marks[0]);

    printf("English:");
    scanf("%d", &marks[1]);

    printf("Math:");
    scanf("%d", &marks[2]);

  printf("Physics= %d, English= %d, Math= %d \n", marks[0], marks[1], marks[2]);


    return 0;
}