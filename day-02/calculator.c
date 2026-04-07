#include <stdio.h>

int main(){

    int num1;
    int num2;
    char operator;
    int result;

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter the operation to perform (+, -, *, /) : ");
    scanf(" %c", &operator);

    printf("Enter second number: ");
    scanf("%d", &num2);

    switch(operator){
        case '+':
            result = num1 + num2;
            printf("Result : %d\n", result);
            break;

        case '-':
            result = num1 - num2;
            printf("Result : %d\n", result);
            break;

        case '*':
            result = num1 * num2;
            printf("Result : %d\n", result);
            break;

        case '/':
            if(num2 == 0){
                printf("Error: Division by zero is undefined.\n");
            }
            else{
                float result  = (float) num1 / num2;
                printf("Result : %.2f\n", result);
            }
            break;

        default:
            printf("Invalid operator. Please enter a valid operator (+, -, *, /).\n");
    }


    return 0;
}