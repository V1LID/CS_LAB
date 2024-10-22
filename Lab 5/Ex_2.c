#include <stdio.h>

int main() {
    char str[1000]; 
    int count = 1;  

  
    printf("Enter the text: ");
    scanf("%s", str); 

    
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == '#') { 
            count++;        
        }
    }

    
    printf("Number of tokens: %d\n", count);

    return 0;
}
