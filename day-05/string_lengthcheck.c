#include <stdio.h>
#include <string.h>

int main(){

    char name[50];

    printf("Enter your name: ");
    fgets(name, 50, stdin);
    name[strcspn(name, "\n")] = '\0';

    if(strlen(name) <=0){
        printf("Invalid! Enter again.\n");
    }
    else if(strlen(name) < 4){
        printf("Too short\n");
    }
    else if(strlen(name) >= 4 && strlen(name) <=12){
        printf("Valid username\n");
    }
    else{
        printf("Too long\n");
    }

    return 0;
}