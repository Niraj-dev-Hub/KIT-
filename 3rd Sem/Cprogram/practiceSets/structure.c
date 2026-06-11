#include <stdio.h>
#include <string.h>

struct student  {
  int std_id;
  char std_name[100];
  char std_address[100];


};


int main() {
    struct student s;

    printf("Enter your id: ");
    scanf("%d", &s.std_id);

    printf("Enter your name:");
    scanf("%s", s.std_name);

    printf("Enter your address: ");
    scanf("%s", s.std_address);

    if(s.std_address =="Kathmandu" || s.std_address =="KATHMANDU" ){
        printf("Name: %s", s.std_name);
    }    


    return 0;
}