#include <stdio.h>
#include <string.h>

int main(){

    char email[70];

    printf("Enter email: ");
    fgets(email, 70, stdin);
    email[strcspn(email, "\n")] = '\0';

    if(strchr(email, '@') != NULL && strchr(email, '.') != NULL){

        printf("Valid email\n");

    }
    else{
        printf("Invalid email\n");
    }


    return 0;
}