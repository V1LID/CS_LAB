#include <stdio.h>

int main() {
    int a, b, k, temp;
    long long sum = 0;

    
    printf("Enter the range [a, b]: ");
    scanf("%d %d", &a, &b);
    
    printf("Enter k: ");
    scanf("%d", &k);

  
    if (k <= 0) {
        printf("k should be a positive integer.\n");
        return 1;
    }
    if (a > b) {
        temp = a;
        a = b;
        b = temp;
    }
    for (int i = a; i <= b; i++) {
        if (i % k == 0) {
            sum += i;
        }
    }

    printf("Sum of elements divisible by %d in the range [%d, %d]: %lld\n", k, a, b, sum);

    return 0;
}
