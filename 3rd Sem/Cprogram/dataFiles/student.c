#include <stdio.h>
#include <string.h>

int main() {
    FILE *fp;
    int roll;
    char name[50], address[100], phone[15];
    char ans[4];
    
    // Write data
    fp = fopen("student.txt", "w");
    
    do {
        printf("Enter roll: ");
        scanf("%d", &roll);
        printf("Enter name: ");
        scanf("%s", name);
        printf("Enter address: ");
        scanf("%s", address);
        printf("Enter phone: ");
        scanf("%s", phone);
        
        fprintf(fp, "%d %s %s %s\n", roll, name, address, phone);
        
        printf("Add more? (YES/NO): ");
        scanf("%s", ans);
        
    } while(strcmp(ans, "YES") == 0);
    
    fclose(fp);
    
    // Read and display
    fp = fopen("student.txt", "r");
    
    printf("\n--- Student Details ---\n");
    while(fscanf(fp, "%d %s %s %s", &roll, name, address, phone) != EOF) {
        printf("%d\t%s\t%s\t%s\n", roll, name, address, phone);
    }
    
    fclose(fp);
    
    return 0;
}