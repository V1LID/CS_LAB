#include <stdio.h>
#include <ctype.h>

int main() {
    char text[1000], normalized[1000];
    int i, j = 0, in_space = 0;

    
    printf("Enter the text: ");
    fgets(text, sizeof(text), stdin);

    
    for (i = 0; text[i] != '\0'; i++) {
        if (isspace(text[i])) {
            if (!in_space) normalized[j++] = ' ';
            in_space = 1;
        } else {
            normalized[j++] = text[i];
            in_space = 0;
        }
    }

   
    if (normalized[0] == ' ') j = 0;
    normalized[j] = '\0';

    
    printf("Normalized text: %s\n", normalized);

    return 0;
}

