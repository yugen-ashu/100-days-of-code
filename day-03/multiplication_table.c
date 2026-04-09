#include <stdio.h>

int main(){

    int num;
    int result;
    int i;

    printf("Enter the number whose multiplication table you want: ");
    scanf("%d", &num);

    for(i = 1; i <= 10; i++){
        result = num * i;
        printf("%d x %d = %d\n", num, i, result);
    }

    return 0;
}