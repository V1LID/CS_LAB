#include <stdio.h>

int main() {
    int n;
   long long product = 1;  
    int sum = 0;

    
    printf("Enter a positive number of n elements: ");
    scanf("%d", &n);

    if (n < 1) {
        printf("Invalid value for n.\n");
        return 1;
    }

    for (int i = 1; i <= n; i++) {
        int x = 3 * i - 1;  
        sum += x;           
        product *= x;       

    }
    printf("Sum of first %d elements: %d\n", n, sum);
    printf("Product of first %d elements: %lld\n", n, product);


    return 0;
}
