#include <stdio.h>
#include <stdlib.h>


int countWordsInFile(const char *fileName);
int isSpace(char ch);

int main() {
    char fileName[100];

    
    printf("Enter the name of the file: ");
    scanf("%99s", fileName);

    
    int wordCount = countWordsInFile(fileName);

    if (wordCount >= 0) {
        printf("The file '%s' contains %d words.\n", fileName, wordCount);
    } else {
        printf("Error reading the file '%s'.\n", fileName);
    }

    return 0;
}

int isSpace(char ch) {
    return (ch == ' ' || ch == '\n' || ch == '\t');
}

int countWordsInFile(const char *fileName) {
    FILE *file = fopen(fileName, "r");
    if (file == NULL) {
        perror("Error opening file");
        return -1;
    }

    int wordCount = 0;
    char ch;
    int inWord = 0;

  
    while ((ch = fgetc(file)) != EOF) {
        if (isSpace(ch)) {
            
            inWord = 0;
        } else if (!inWord) {
           
            inWord = 1;
            wordCount++;
        }
    }

    fclose(file);
    return wordCount;
}
