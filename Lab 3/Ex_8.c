#include <stdio.h>

int main() {
    int n;

    
    printf("Enter a positive integer n: ");
    scanf("%d", &n);

    
    if (n <= 0) {
        printf("Invalid input\n");
        return 1;
    }

    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            
            int num = (i * n) + j + 1;
            printf("%d ", num);
        }
        printf("\n"); 
    }

    return 0;
}
