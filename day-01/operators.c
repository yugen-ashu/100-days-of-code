#include <stdio.h>

int main(){

    int a = 15;
    int b = 4;

    //Arithmetic Operations 

    int sum = a + b;
    int difference = a - b;
    int product = a * b;
    int quotient = a / b;
    int remainder = a % b;

    float result = (float) a / b; //Casting to get the precise result of division

    printf("Sum of %d and %d (%d + %d) : %d\n", a, b, a, b, sum);
    printf("Difference of %d and %d (%d - %d) : %d\n", a, b, a, b,  difference);
    printf("Product of %d and %d (%d * %d) : %d\n", a, b, a, b, product);
    printf("Quotient of %d and %d (%d / %d) : %d\n", a, b, a, b, quotient);
    printf("Remainder of %d and %d (%d %% %d) : %d\n", a, b, a, b, remainder);
    printf("Precise division result.Quotient of %d and %d (%d / %d) : %f\n", a, b, a, b, result);
    return 0;
}