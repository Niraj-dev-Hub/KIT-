#include <stdio.h>
#include<math.h>
//print the total cost with gst of 3 goods
int main() {
    
    int Items[3];

    printf("Enter the price of given Items\n");

    printf("Rice:");
    scanf("%d", &Items[0]);

    printf("vegetable:");
    scanf("%d", &Items[1]);

    printf("Daal :");
    scanf("%d", &Items[2]);

    int sum = (Items[0] + Items[1] +Items[2]) ;

    printf("Total %d \n", sum);

    float total = sum + (( sum * 13)/100);

    printf("Total Price With gst: %.2f \n", total);


    return 0;
}