/*
3. Calculate income tax paid by an employee to the government as per the slabs
mentioned below:
 Income Slab Tax
 2.5 – 5.0L 5%
 5.0L - 10.0L 20%
 Above 10.0L 30%
Note that there is no tax below 2.5L. Take income amount as an input from the user.

*/

#include <stdio.h>
int main(){
    int income ;
    int tax = 0;
    printf("please enter your income:-");
    scanf("%d" , &income);

 if (income <= 250000) {
        printf("Your income is %d, so you don't need to pay income tax.\n", income);
    } else if (income <= 500000) {
        tax = income * 5 / 100;
        printf("Your income is %d, so your tax is %d and your income after tax is %d.\n", income, tax, income - tax);
    } else if (income <= 1000000) {
        tax = 250000 * 5 / 100 + (income - 500000) * 20 / 100;
        printf("Your income is %d, so your tax is %d and your income after tax is %d.\n", income, tax, income - tax);
    } else {
        tax = 250000 * 5 / 100 + 500000 * 20 / 100 + (income - 1000000) * 30 / 100;
        printf("Your income is %d, so your tax is %d and your income after tax is %d.\n", income, tax, income - tax);
    }
    
    return 0;
}
