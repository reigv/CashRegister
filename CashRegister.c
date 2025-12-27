// CashRegister.c -- 

#include <stdio.h>

int main (void) {
    double i_cost1;
    double i_cost2;
    double i_cost3;
    double i_cost_sum;

    printf("Enter item 1 cost: $");
    scanf_s("%lf", &i_cost1);

    printf("Enter item 2 cost: $");
    scanf_s("%lf", &i_cost2);

    printf("Enter item 3 cost: $");
    scanf_s("%lf", &i_cost3);

    return 0;
}