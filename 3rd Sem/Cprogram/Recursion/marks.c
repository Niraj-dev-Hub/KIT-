#include <stdio.h>
#include<math.h>

int percent(int science, int math , int english);

int main() {
    int sc,mth,eng;
    printf("Enter the marks of Science:");
    scanf("%d", &sc);
    printf("Enter the marks of math:");
     scanf("%d", &mth);
    printf("Enter the marks of English:");
     scanf("%d", &eng);
     int per = percent(sc,mth,eng);
    printf("Total percent is :%d\n ",per);
   

    return 0;
}

int percent(int science, int math , int english){
    return ((science + math + english)/3);
}