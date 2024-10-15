#include <stdio.h>

int main() {
    int n, num;
    int sumEven = 0, sumOdd = 0;

    
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    
    for (int i = 1; i <= n; i++) {
        printf("Enter element %d: ", i);
        scanf("%d", &num);

        if (num % 2 == 0) {
            sumEven += num;  
        } else {
            sumOdd += num;   
        }
    }

  
    printf("Sum of even elements: %d\n", sumEven);
    printf("Sum of odd elements: %d\n", sumOdd);

    return 0;
}
