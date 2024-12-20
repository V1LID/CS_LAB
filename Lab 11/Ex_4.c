#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct {
    char name[50];
    int age;
    float gpa;
} Student;


void textToBinary(const char *textFileName, const char *binaryFileName);

int main() {
    char textFileName[100], binaryFileName[100];

    
    printf("Enter the name of the text file: ");
    scanf("%99s", textFileName);

  
    printf("Enter the name of the binary file: ");
    scanf("%99s", binaryFileName);

    
    textToBinary(textFileName, binaryFileName);

    printf("Data has been successfully converted from '%s' to '%s'.\n", textFileName, binaryFileName);

    return 0;
}


void textToBinary(const char *textFileName, const char *binaryFileName) {
    FILE *textFile = fopen(textFileName, "r");
    if (textFile == NULL) {
        perror("Error opening text file");
        exit(EXIT_FAILURE);
    }

    FILE *binaryFile = fopen(binaryFileName, "wb");
    if (binaryFile == NULL) {
        perror("Error opening binary file");
        fclose(textFile);
        exit(EXIT_FAILURE);
    }

    Student student;

    
    while (fscanf(textFile, "%49s %d %f", student.name, &student.age, &student.gpa) == 3) {
        fwrite(&student, sizeof(Student), 1, binaryFile);
    }

    fclose(textFile);
    fclose(binaryFile);
}
