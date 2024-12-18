#include <stdio.h>
#include <string.h>


struct Book {
    char title[50];
    char author[50];
    float price;
};


void printBook(struct Book b) {
    printf("Title: %s\n", b.title);
    printf("Author: %s\n", b.author);
    printf("Price: $%.2f\n", b.price);
    printf("------------------------\n");
}

int main() {
    int n;

  
    printf("Enter the number of books: ");
    scanf("%d", &n);
    
   
    struct Book books[n];

   
    for (int i = 0; i < n; i++) {
        printf("Enter book info %d\n", i + 1);
        
        printf("Title: ");
        getchar(); 
        fgets(books[i].title, sizeof(books[i].title), stdin);
        books[i].title[strcspn(books[i].title, "\n")] = '\0'; 
        
        printf("Author: ");
        fgets(books[i].author, sizeof(books[i].author), stdin);
        books[i].author[strcspn(books[i].author, "\n")] = '\0'; 
        
        printf("Price: ");
        scanf("%f", &books[i].price);
    }

   
    printf("\nDetails of books:\n");
    for (int i = 0; i < n; i++) {
        printBook(books[i]);
    }

    
    printf("Size of Book structure: %lu bytes\n", sizeof(struct Book));

    return 0;
}
