#include <stdio.h>

int main() {
    int n, m;

    printf("Enter the number of rows and columns (n m): ");
    scanf("%d %d", &n, &m);

    int matrix[n][m];
    int row_sum[n];
    int col_sum[m];

    for (int i = 0; i < n; i++) row_sum[i] = 0;
    for (int j = 0; j < m; j++) col_sum[j] = 0;

    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &matrix[i][j]);
            row_sum[i] += matrix[i][j]; 
            col_sum[j] += matrix[i][j]; 
        }
    }
 
    printf("Matrix with row sums:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("| %d\n", row_sum[i]); 
    }

    printf("_ _ _\n");
    for (int j = 0; j < m; j++) {
        printf("%d ", col_sum[j]);
    }
    printf("\n");

    return 0;
}
