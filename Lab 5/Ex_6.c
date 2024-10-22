#include <stdio.h>

int main() {
    int n;
    
    printf("Enter the value of n: ");
    scanf("%d", &n);

    if (n < 1 || n > 10) {
        printf("Please enter a value between 1 and 10.\n");
        return 1; 
    }

    for (int i = 0; i < n; i++) {
        
        for (int j = 1; j <= n; j++) {
            
            if (j % 2 != 0) {  
                printf("%d ", j);
            } else {          
                printf("%c ", 'A' + j - 1);
            }
        }
        printf("\n"); 
    }

    return 0;
}