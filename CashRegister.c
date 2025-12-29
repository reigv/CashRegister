// CashRegister.c -- 

#include <stdio.h>

int main (void) {
    double i_cost1 = 12.69;
    double i_cost2 = 12.69;
    double i_cost3 = 12.69;
    double i_cost_sum;


    // printf("Enter item 1 cost: $");
    // scanf("%lf", &i_cost1);

    // printf("Enter item 2 cost: $");
    // scanf("%lf", &i_cost2);

    // printf("Enter item 3 cost: $");
    // scanf("%lf", &i_cost3);

    int i1_dollar;
    int i1_remainders;
    int i1_quarter;
    int i1_dimes;
    int i1_nickles;
    int i1_pennies;

    i1_dollar = (int)i_cost1;
    i1_remainders = (int)(i_cost1 * 100.0 + 0.5) % 100;  // floating error???

    i1_quarter = i1_remainders / 25;
    i1_remainders = i1_remainders - (i1_quarter * 25);

    i1_dimes = i1_remainders / 10;
    i1_remainders = i1_remainders - (i1_dimes*10);

    i1_nickles = i1_remainders / 5;
    i1_remainders = i1_remainders - (i1_nickles*5);

    i1_pennies = i1_remainders;

    //------------------------------------------------
    int i2_dollar;
    int i2_remainders;
    int i2_quarter;
    int i2_dimes;
    int i2_nickles;
    int i2_pennies;

    i2_dollar = (int)i_cost2;
    i2_remainders = (int)(i_cost2 * 100.0 + 0.5) % 100;

    i2_quarter = i2_remainders / 25;
    i2_remainders = i2_remainders - (i2_quarter * 25);

    i2_dimes = i2_remainders / 10;
    i2_remainders = i2_remainders - (i2_dimes * 10);

    i2_nickles = i2_remainders / 5;
    i2_remainders = i2_remainders - (i2_nickles * 5);

    i2_pennies = i2_remainders;

    //--------------------------------------------------------
    int i3_dollar;
    int i3_remainders;
    int i3_quarter;
    int i3_dimes;
    int i3_nickles;
    int i3_pennies;

    i3_dollar = (int)i_cost3;
    i3_remainders = (int)(i_cost3 * 100.0 + 0.5) % 100;

    i3_quarter = i3_remainders / 25;
    i3_remainders = i3_remainders - (i3_quarter * 25);

    i3_dimes = i3_remainders / 10;
    i3_remainders = i3_remainders - (i3_dimes * 10);

    i3_nickles = i3_remainders / 5;
    i3_remainders = i3_remainders - (i3_nickles * 5);

    i3_pennies = i3_remainders;

    // int i_remainder=0;
    int i_pennies_sum = 0;
    int i_nickles_sum = 0;
    int i_dimes_sum = 0;
    int i_quarters_sum = 0;
    int i_dollars_sum = 0;

//    i_pennies_sum = i1_pennies + i2_pennies + i3_pennies;
//    if (i_pennies_sum >= 5) {
//        i_nickles_sum = i_pennies_sum /5.0;
//        i_pennies_sum -= i_nickles_sum*5;
//    }
//
//    i_nickles_sum += i1_nickles + i2_nickles + i3_nickles;
//    if (i_nickles_sum >= 2){
//        i_dimes_sum = i_nickles_sum / 10.0;
//        i_nickles_sum -= i_dimes_sum*10;
//    }
//
//    i_dimes_sum += i1_dimes + i2_dimes + i3_dimes;
//    if (i_dimes_sum >= 3) {
//        i_quarters_sum = i_dimes_sum / 25;
//        i_dimes_sum -= i_quarters_sum * 25;
//    }
//
//    i_quarters_sum += i1_quarter + i2_quarter + i3_quarter;
//    if 
    //i_dimes_sum += i1

    i_pennies_sum = i1_pennies + i2_pennies + i3_pennies;
    i_nickles_sum = i_pennies_sum / 5;
    i_pennies_sum %= 5;

    i_nickles_sum += i1_nickles + i2_nickles + i3_nickles;
    i_dimes_sum = i_nickles_sum / 2;
    i_nickles_sum %= 2;

    i_dimes_sum += i1_dimes + i2_dimes + i3_dimes;
    i_quarters_sum = i_dimes_sum / 2.5;
//    i_dimes_sum %= 2.5;

    return 0;
}