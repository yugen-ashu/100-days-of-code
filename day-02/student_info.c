#include <stdio.h>

int main() {

    char name[30];
    int age;
    float marks;

    printf("Enter your name: ");
    scanf("%s", name);

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your marks: ");
    scanf("%f", &marks);

    printf("Name  : %s\n", name);
    printf("Age   : %d\n", age);
    printf("Marks : %.2f\n", marks);

    return 0;

}