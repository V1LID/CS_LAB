#include <stdio.h>

int main() {
    int n, i = 1;
    float num, sum = 0.0;

    
    printf("Enter the number of floating-point numbers (n): ");
    scanf("%d", &n);

    
    while (i <= n) {
        printf("Enter float number %d: ", i);
        scanf("%f", &num);
        sum += num;
        i++; 
    }

   
    printf("Sum of all the floating-point numbers: %.3f\n", sum);

    return 0;
}
