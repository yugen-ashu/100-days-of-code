//  Length Check
// Take a username as input. If its length is less than 4, print "Too short". If it's between 4 and 12, print "Valid username". If more than 12, print "Too long".


#include <stdio.h>
#include <string.h>

int main(){

    char name[50];
    

    printf("Enter your name: ");
    fgets(name, 50, stdin);
    name[strcspn(name, "\n")] = '\0';

    int len = strlen(name);

    if(len <=0){
        printf("Invalid! Enter again.\n");
    }
    else if(len < 4){
        printf("Too short\n");
    }
    else if(len <=12){
        printf("Valid username\n");
    }
    else{
        printf("Too long\n");
    }

    return 0;
}