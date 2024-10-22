#include <stdio.h>

int main() {
    char str[1000]; 
    char new_str[1000];  
    int i = 0, j = 0;

    printf("Enter the text: ");
    scanf("%s", str); 

    while (str[i] != '\0') {
        if (str[i] == '#') {
            new_str[j] = '_'; 
        } else {
            new_str[j] = str[i]; 
        }
        i++;
        j++;
    }
    
    new_str[j] = '\0'; 

    printf("New string: %s\n", new_str);

    return 0;
}
