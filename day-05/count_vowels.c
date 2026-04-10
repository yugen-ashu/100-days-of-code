#include <stdio.h>
#include <string.h>


int main(){

    int count = 0;
    char text[100];

    printf("********Finding Vowels on Your Text***********\n");
    printf("Enter text/word: ");
    fgets(text, 100, stdin);
    text[strcspn(text,"\n")] = '\0';

    for(int i = 0; text[i] != '\0'; i++){

        if(text[i] == 'a' || text[i] == 'A' ||
           text[i] == 'e' || text[i] == 'E' ||
           text[i] == 'i' || text[i] == 'I' ||
           text[i] == 'o' || text[i] == 'O' ||
           text[i] == 'u' || text[i] == 'U'){

            count++;
           }
    }

    if(count > 0){
        printf("Number of vowels in your text: %d\n", count);
    }
    else{
        printf("No vowels in the text!\n");
    }
    
    return 0;
}