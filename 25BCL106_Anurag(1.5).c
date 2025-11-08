#include <stdio.h>
#include <string.h>

int main() {
    char name[100], *token, lastName[50];

    printf("Enter full name: ");
    scanf(" %[^\n]", name);  
    token = strtok(name, " ");

    while(token != NULL) {
        strcpy(lastName, token);  
        token = strtok(NULL, " ");
    }

    token = strtok(name, " ");
    
    while(token != NULL && strcmp(token, lastName) != 0) {
        printf("%c. ", token[0]);
        token = strtok(NULL, " ");
    }

    printf("%s", lastName);

    return 0;
}
