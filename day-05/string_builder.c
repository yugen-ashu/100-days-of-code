#include <stdio.h>
#include <string.h>

int main(){

    char first_name[30];
    char last_name[30];
    char fullName[100];

    printf("Enter your first name: ");
    fgets(first_name, 30, stdin);
    first_name[strcspn(first_name, "\n")] = '\0';

    printf("Enter your last name: ");
    fgets(last_name, 30, stdin);
    last_name[strcspn(last_name, "\n")] = '\0';

    strcpy(fullName, first_name);
    strcat(fullName, " ");
    strcat(fullName, last_name);

    printf("Hello %s\n", fullName);
    printf("Total length: %d", strlen(fullName));


    return 0;
}