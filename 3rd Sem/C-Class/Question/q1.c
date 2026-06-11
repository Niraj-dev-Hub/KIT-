#include <stdio.h>

int main() {
    int m, n, i, j;
    int even_sum = 0, odd_sum = 0;

    // Input dimensions
    printf("Enter rows and columns (m n): ");
    scanf("%d %d", &m, &n);

    int matrix[m][n];

    // Input matrix elements
    printf("Enter elements of the matrix:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Logic to find sums
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            if (matrix[i][j] % 2 == 0) {
                even_sum += matrix[i][j];
            } else {
                odd_sum += matrix[i][j];
            }
        }
    }

    printf("\nSum of Even numbers: %d", even_sum);
    printf("\nSum of Odd numbers: %d\n", odd_sum);

    return 0;
}