#include <stdio.h>

int main() {
    int n;

   
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    if (n <= 0) {
        printf("Enter a positive integer.\n");
        return 1;
    }

   
    int arr[n];
    int sum = 0;

    printf("Enter %d integers: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i]; 
    }
     float average = (float) sum / n;

    printf("Elements less than the average (%.2f): ", average);
    for (int i = 0; i < n; i++) {
        if (arr[i] < average) {
            printf("%d ", arr[i]);
        }
    }

    printf("\n");
    return 0;
}
