#include <stdio.h>

int main(){
    int year;
    printf("Enter year: \n");
    scanf("%d", &year);
    // Leap year conditions:
    // 1. Divisible by 4 AND
    // 2. (Not divisible by 100 OR divisible by 400)

    if((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)){
        printf("%d is a leap year\n", year);
    }
    else{
        printf("%d is not a leap year\n", year);
    }
    
    return 0;
}
// output will be "2020 is a leap year" if input is 2020, otherwise "2021 is not a leap year" if input is 2021.