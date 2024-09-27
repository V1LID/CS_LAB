#include <stdio.h>

int main() {
    int a, b, k, temp, sum = 0;

   
    printf("Enter two integers [a, b] for range: ");
    scanf("%d %d", &a, &b);

    printf("Enter a positive integer k: ");
    scanf("%d", &k);

    
   if(a>b) {
        
        int c = a;
        a = b;
        b = c;
    }

    for (int i = a; i <= b; i++) {
        if (i % k == 0) {
            sum += i;
        }
    }


    printf("Sum of elements divisible by %d in the range [%d, %d]: %d\n", k, a, b, sum);

    return 0;
}
