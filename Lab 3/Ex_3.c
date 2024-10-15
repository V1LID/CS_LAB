#include <stdio.h>

int main() {
    int n;
    double harmonic_sum = 0.0;

    printf("Enter the number of terms n: ");
    scanf("%d", &n);

    
    if (n <= 0) {
        printf("Please enter a positive integer.\n");
        return 1;
    }
    for (int i = 1; i <= n; i++) {
        harmonic_sum += 1.0 / i;
    }

    printf("Harmonic sum for n = %d: %.3lf\n", n, harmonic_sum);

    return 0;
}
