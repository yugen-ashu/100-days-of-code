/*Reverse a String
Take a string as input. Reverse it manually using a loop (without any library function). Print the reversed string.
(Hint: find the length with strlen. Use a loop from len-1 down to 0, printing each character. Or swap characters from both ends moving inward.)*/

#include <stdio.h>
#include <string.h>

int main(){

    char phrase[30];

    printf("***********Reversing the Phrase*******************\n");

    printf("Enter a phrase/word: ");
    fgets(phrase, 30, stdin);
    phrase[strcspn(phrase, "\n")] = '\0';

    for(int i = (strlen(phrase) - 1); i >= 0; i--){

       /* printf("%s", phrase[i]);
            this tells printf that treat it as string where it's character phrase[i].
            it will check for that memory location and read till it find '\0' which is random restricted memory location.
            os says no : segmentation fault (segfault)
            phrase : whole string: %s
            phrase[i] : one character : %c

       */
    //   the solution
         printf("%c", phrase[i]); //%c means print one character that's what phrase[i] is. 

    }

    printf("\n");

    return 0;
}