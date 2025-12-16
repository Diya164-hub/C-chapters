#include <stdio.h>

int main(){
    int income, tax = 0;
    printf("Enter income: \n");
    scanf("%d", &income);
    if(income<250000){
        tax = 0;
    }
    else if(income>250000 && income<=500000){
        tax = tax + 0.05 * (income - 250000);
    }
    else if(income>500000 && income<=1000000){
        tax = tax + 0.05 * (5000000 - 250000) + 0.2 * (income - 5000000);
    }
    else {
        tax = tax + 0.05 * (5000000 - 250000) + 0.2 * (1000000 - 5000000) + 0.3 * (income - 1000000);
    }
    printf("The total tax to be paid is %.3f\n", tax);
    return 0;
}