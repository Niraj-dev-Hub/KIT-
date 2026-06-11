
#include <stdio.h>
#include <stdlib.h>

struct student
{
    int roll;
    char name[50];
    char address[100];
    char phone[15];
};

int main()
{
    FILE *fp;
    struct student s;
    char choice;

    fp = fopen("student.dat", "a+");

    do
    {
        printf("Enter Roll: ");
        scanf("%d", &s.roll);

        printf("Enter Name: ");
        scanf("%s", s.name);

        printf("Enter Address: ");
        scanf("%s", s.address);

        printf("Enter Telephone: ");
        scanf("%s", s.phone);

        fwrite(&s, sizeof(s), 1, fp);

        printf("Do you want to add more record? (y/n): ");
        scanf(" %c", &choice);

    } while(choice=='y' || choice=='Y');

    rewind(fp);

    printf("\nStudent Records:\n");

    while(fread(&s, sizeof(s), 1, fp)==1)
    {
        printf("\nRoll: %d", s.roll);
        printf("\nName: %s", s.name);
        printf("\nAddress: %s", s.address);
        printf("\nPhone: %s\n", s.phone);
    }

    fclose(fp);

    return 0;
}