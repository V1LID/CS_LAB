#include <stdio.h>

int main() {
    int num, result = 0, factor = 1;

    printf("Enter an integer: ");
    scanf("%d", &num);

    while (num != 0) {
        int digit = num % 10; 
        num /= 10;  

        if (digit != 0) {
            result += digit * factor; 
            factor *= 10;
        }
    }


    printf("Resulting number: %d\n", result);

    return 0;
}