#include <stdio.h>

int main(){

    int  i;
    int o;

    for(o = 1; o <= 5; o++){
        for(i = 1; i <= o; i++){
            printf("* ");
        }
        printf("\n");
    }


    return 0;
}