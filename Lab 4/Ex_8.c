#include <stdio.h>

int main() {
    int n;

   
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    if (n < 3) {
        printf("The array should have at least 3 elements.\n");
        return 1;
    }

   
    int arr[n];
    int sum = 0;

   
    printf("Enter %d integers: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];  
    }

    
    int min = arr[0], max = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    
    int final_sum = sum - min - max;

    
    printf("Sum excluding the minimum and maximum elements: %d\n", final_sum);

    return 0;
}
