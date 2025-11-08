#include <stdio.h>

int main() {
    char books[3][50];  
    int i;

    printf("Enter names of 3 books:\n");

    for(i = 0; i < 3; i++) {
        printf("Enter book %d: ", i + 1);
        scanf(" %[^\n]", books[i]); 
    }

    printf("\n***** Book List *****\n");
    for(i = 0; i < 3; i++) {
        printf("Book %d: %s\n", i + 1, books[i]);
    }

    return 0;
}
