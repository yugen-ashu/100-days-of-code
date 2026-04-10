#include <stdio.h>
#include <string.h>

int main(){

    char phrase[30];

    printf("***********Reversing the Phrase*******************\n");

    printf("Enter a phrase/word: ");
    fgets(phrase, 30, stdin);
    phrase[strcspn(phrase, "\n")] = '\0';

    for(int i = (strlen(phrase) - 1); i >= 0; i--){

        printf("%c", phrase[i]);
    }

    printf("\n");

    return 0;
}