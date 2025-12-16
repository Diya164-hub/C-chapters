#include <stdio.h>
#include <math.h>

int factorial(int x)
{
    int fact = 1, i;
    for (i = 2; i <= x; i++)
    {
        fact *= i;
    }
    return fact;
}

int permutation(int n, int r)
{
    return factorial(n) / factorial(n - r);
}

int combination(int n, int r)
{
    return factorial(n) / (factorial(r) * factorial(n - r));
}

int main()
{
    double a, b;
    int choice;

    printf("Enter two operands (a and b): ");
    scanf("%lf %lf", &a, &b);

    printf("\n------ MENU ------\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Power (a^b)\n");
    printf("6. Square root of a\n");
    printf("7. Cube root of a\n");
    printf("8. Log base 10\n");
    printf("9. Factorial of a\n");
    printf("10. nPr\n");
    printf("11. nCr\n");
    printf("12. Round a\n");
    printf("13. Ceil a\n");
    printf("14. Remainder (int) a %% b\n");
    printf("-------------------\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice)
    {

    case 1:
        printf("Result = %.2lf\n", a + b);
        break;

    case 2:
        printf("Result = %.2lf\n", a - b);
        break;

    case 3:
        printf("Result = %.2lf\n", a * b);
        break;

    case 4:
        if (b != 0)
            printf("Result = %.2lf\n", a / b);
        else
            printf("Error: Division by zero!\n");
        break;

    case 5:
        printf("Result = %.2lf\n", pow(a, b));
        break;

    case 6:
        printf("Result = %.2lf\n", sqrt(a));
        break;

    case 7:
        printf("Result = %.2lf\n", cbrt(a));
        break;

    case 8:
        printf("Result = %.2lf\n", log10(a));
        break;

    case 9:
        printf("Factorial = %d\n", factorial((int)a));
        break;

    case 10:
        printf("nPr = %d\n", permutation((int)a, (int)b));
        break;

    case 11:
        printf("nCr = %d\n", combination((int)a, (int)b));
        break;

    case 12:
        printf("Rounded = %.2lf\n", round(a));
        break;

    case 13:
        printf("Ceil = %.2lf\n", ceil(a));
        break;

    case 14:
        printf("Remainder = %d\n", (int)a % (int)b);
        break;

    default:
        printf("Invalid choice!\n");
    }

    return 0;
}
