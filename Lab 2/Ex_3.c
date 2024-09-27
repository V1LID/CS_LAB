#include <stdio.h>

int main() {
    int n;
    double sum = 0.0;

    printf("Enter the number of terms (n): ");
    scanf("%d", &n);

    
    for (int i = 1; i <= n; i++) {
        sum += 1.0 / i;
    }


    printf("Sum of the first %d elements of the harmonic series: %.3f\n", n, sum);

    return 0;
}
