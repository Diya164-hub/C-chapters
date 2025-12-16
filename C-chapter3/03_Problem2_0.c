#include <stdio.h>

int main()
{
    float income, tax = 0;

    printf("Enter income: \n");
    scanf("%f", &income);

    if (income <= 250000)
    {
        tax = 0;
    }
    else if (income > 250000 && income <= 500000)
    {
        tax = 0.05 * (income - 250000);
    }
    else if (income > 500000 && income <= 1000000)
    {
        tax = 0.05 * (500000 - 250000);
        tax += 0.20 * (income - 500000);
    }
    else
    { // income > 10 lakh
        tax = 0.05 * (500000 - 250000);
        tax += 0.20 * (1000000 - 500000);
        tax += 0.30 * (income - 1000000);
    }

    printf("The total tax to be paid is %.3f\n", tax);
    return 0;
}
