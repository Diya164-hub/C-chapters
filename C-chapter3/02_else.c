#include <stdio.h>

int main(){
    int age = 15;
    if (age < 5) //here < 5 ans go in else block
                 // or >5 ans go in if block
    {

        printf("Your age is greater then 10\n");
        printf("We are inside if\n");
        // Statments if condition is true
    }
    else
    {
        printf("Your age is not greater then 10\n");
        printf("We are inside else\n");
        // Statments if condition is false
    }
    return 0;
}