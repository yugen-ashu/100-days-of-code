#include <stdio.h>

int main() {
    int unit_consumed;
    float bill_amount;

    printf("Enter the amount of units consumed: ");
    scanf("%d", &unit_consumed);

   if(unit_consumed < 0){
    printf("Invalid input.Enter the valid input.\n");
   }
   else if(unit_consumed <=100){
    bill_amount = unit_consumed * 3;
    printf("Your electricity bill amount : %.2f\n", bill_amount);
   }
   else if(unit_consumed <=200){
    bill_amount = (100 * 3) + ((unit_consumed - 100) * 5);
    printf("Your electricity bill amount : %.2f\n", bill_amount);
   }
   else {
    bill_amount = (100 * 3) + (100 * 5) + ((unit_consumed - 200) * 8);
    printf("Your electricity bill amount : %.2f\n", bill_amount);
   }
   
    return 0;
}