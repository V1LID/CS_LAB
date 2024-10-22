#include <stdio.h>

int main() {
    char str[1000]; 
    int length = 0, count = 0; 

   
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); 
    
     while (str[length] != '\0' && str[length] != '\n') {
        if (str[length] != ' ') { 
            count++;
        }
        length++;
    }

   
    printf("Number of charachters: %d\n", count);

    return 0;
}
