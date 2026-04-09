#include <stdio.h>

int main(){

    int attempts = 0;
    int secret_number = 42;
    int guess;

    do{
        printf("Guess the number: ");
        scanf("%d", &guess);
        attempts++;

        if(guess == secret_number){
            printf("Correct! You got it in %d attempts.\n", attempts);
            break;
        }
        else{
            printf("Wrong! Try again.\n");
        }
    }while(guess != secret_number);

    return 0;
}