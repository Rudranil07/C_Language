// Calculate income tax paid by an employee to the government as per the slabs
// mentioned below:
//  Income Slab     Tax
//  2.5 – 5.0L      5%
//  5.0L - 10.0L    20%
//  Above 10.0L     30%
// Note that there is no tax below 2.5L. Take income amount as an input from the user.

#include<stdio.h>

int main(){
    int i;
    printf("Enter your income: ");
    scanf("%d", &i);
    if (i>=250000 && i<500000){
        printf("Your tax is %d", i*0.05);
    }
    else if (i>=500000 && i<1000000){
        printf("Your tax is %d", i*0.2);
    }
    else if (i>=1000000){
        printf("Your tax is %d", i*0.3);
    }
    else{
        printf("You don't have to pay any tax");
    }
    return 0;
}