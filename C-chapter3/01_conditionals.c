// chapter 03: Conditionals Instractions
// 2 types of Decisiom Making Statements in C:
// 1. if-else Statement
// 2. switch Statement
#include <stdio.h>

int main()
{
    int age = 15;
    if(age > 10){
    
        printf("Your age is greater then 10\n");
        printf("We are inside if\n");
        // Statments if condition is true
    }
    if(age%5==0){
        printf("We are inside another if\n");
        printf("Your age is divisible by 50\n");
        // Statments if condition is true
    }

    return 0;
}