#include <stdio.h>

int main() {
    int n;

    printf("Enter the size of the matrix (n): ");
    scanf("%d", &n);

    int matrix[n][n];
    int sum = 0;

    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);

            
            if (i == j) {
                sum += matrix[i][j];
            }
            
           
            if (i + j == n - 1) {
                sum += matrix[i][j];
            }
        }
    }

    
    if (n % 2 != 0) {
        sum -= matrix[n / 2][n / 2];
    }

    printf("Sum of elements of both diagonals: %d\n", sum);

    return 0;
}
