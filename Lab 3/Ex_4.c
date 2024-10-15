#include <stdio.h>

int main() {
    int n;
    float sum = 0.0, num;

    printf("Enter the number of floats: ");
    scanf("%d", &n);

   
    if (n <= 0) {
        printf("Enter a positive integer for n.\n");
        return 1;
    }
    for (int i = 1; i <= n; i++) {
        printf("Enter float number %d: ", i);
        scanf("%f", &num);
        sum += num;
    }

   
    printf("Sum of the floating-point numbers: %.3f\n", sum);

    return 0;
}
