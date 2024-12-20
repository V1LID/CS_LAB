#include <stdio.h>
#include <stdlib.h>


void copyNumbers(const char *sourceFile, const char *destinationFile);

int main() {
    char sourceFile[100], destinationFile[100];

  
    printf("Enter the name of the source file: ");
    scanf("%99s", sourceFile);

    printf("Enter the name of the destination file: ");
    scanf("%99s", destinationFile);


    copyNumbers(sourceFile, destinationFile);

    printf("Numbers have been successfully copied from %s to %s.\n", sourceFile, destinationFile);

    return 0;
}

void copyNumbers(const char *sourceFile, const char *destinationFile) {
    FILE *src, *dest;
    int number;

    src = fopen(sourceFile, "r");
    if (src == NULL) {
        perror("Error opening source file");
        exit(EXIT_FAILURE);
    }

   
    dest = fopen(destinationFile, "w");
    if (dest == NULL) {
        perror("Error opening destination file");
        fclose(src);
        exit(EXIT_FAILURE);
    }

   
    while (fscanf(src, "%d", &number) !=0) {
        fprintf(dest, "%d\n", number);
    }

    
    fclose(src);
    fclose(dest);
}
