#include <stdio.h>

int main() {
    int n;
    long long sum = 0;
    long long product = 1;


    printf("Enter the number of elements: ");
    scanf("%d", &n);

  
    if (n < 1) {
        printf("Enter a positive integer.\n");
        return 1;
    }
    for (int i = 1; i <= n; i++) {
        int xi = 2 * i + 1;
        sum += xi;
        product *= xi;
    }

 
    printf("Sum of the first %d elements: %lld\n", n, sum);
    printf("Product of the first %d elements: %lld\n", n, product);

    return 0;
}
