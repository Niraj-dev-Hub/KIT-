#include <stdio.h>

int main(){
    //WAP in C to input any integer values and display the corresponding days of a week using switch statement

     int day;

    printf("Enter a Number (1-7): ");
    scanf("%d", &day);

    switch(day){
        case 1: printf(" Sunday \n");
        break;
         case 2: printf(" Monday \n");
        break;
         case 3: printf(" Tuesday\n");
        break;
         case 4: printf(" Wednesday\n");
        break;
         case 5: printf(" Thursday\n");
        break;
         case 6: printf(" Friday\n");
        break;
         case 7: printf(" Saturday \n");
        break;
        default: printf("Wrong number\n ");
        break;

    }
    return 0;
}

