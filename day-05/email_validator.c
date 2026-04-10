/* Email Validator (Basic)
Take an email address as input. Check:

Does it contain @? (use strchr)
Does it contain .? (use strchr)
If both are present, print "Valid email". Otherwise print "Invalid email".*/

#include <stdio.h>
#include <string.h>

int main(){

    char email[70];

    printf("Enter email: ");
    fgets(email, 70, stdin);
    email[strcspn(email, "\n")] = '\0';

    if(strchr(email, '@') != NULL && strchr(email, '.') != NULL){

        printf("Valid email\n");

        /*validator has a small logical gap — try this input:
.Naruto@uzumaki
It will say Valid — but . is before @, which is not a real email format.
A real email needs the . to appear after the @. You can check this with pointer comparison — but that requires pointers which you haven't done yet. Just file this thought in your head:

"My current check confirms both symbols exist, but not that they're in the right order."*/

    }
    else{
        printf("Invalid email\n");
    }


    return 0;
}