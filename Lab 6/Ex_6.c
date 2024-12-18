#include <stdio.h>

int main() {
    int n;
    
    
    printf("Enter the size of the matrix (n): ");
    scanf("%d", &n);

    int matrix[n][n];
    int diagonal_sum = 0;
    int non_diagonal_sum = 0;

    
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
s
            
            if (i == j) {
                diagonal_sum += matrix[i][j];
            }
           
            else {
                non_diagonal_sum += matrix[i][j];
            }
        }
    }

   
    if (diagonal_sum == n && non_diagonal_sum == 0) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }

    return 0;
}

