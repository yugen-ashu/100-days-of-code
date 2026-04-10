// Write a program that takes your name as input using fgets and prints: Hello, [name]! Welcome.


#include <stdio.h>
#include <string.h>


int main(){

    char name[50];

    printf("Enter your name: ");
    fgets(name, 50, stdin);
    name[strcspn(name, "\n")] = '\0';


    printf("Hello, %s! Welcome.\n", name);

    return 0;
}