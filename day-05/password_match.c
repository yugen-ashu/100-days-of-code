#include <stdio.h>
#include <string.h>

int main(){

    char password[30];
    char password_verify[30];

    printf("Enter a password: ");
    fgets(password, 30, stdin);
    password[strcspn(password,"\n")] = '\0';

    printf("Re-Enter the password to confirm: ");
    fgets(password_verify, 30, stdin);
    password_verify[strcspn(password_verify, "\n")] = '\0';

    if(strcmp(password, password_verify) == 0){
        printf("Password set!\n");
    }
    else{
        printf("Passwords do not match.\n");
    }


    return 0;
}