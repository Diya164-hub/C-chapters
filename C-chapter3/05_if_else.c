#include <stdio.h>

int main(){
    int age = 40;

    if(age>=40){ // first condition is checked
        printf("You are eligible for voting and you are senior citizen\n"); // this block is executed if age is greater than 60
    }
    else if(age=40){ // else if ladder
        printf("You are eligible for voting and you are elder\n"); // this block is executed if age is greater than 18 but less than or equal to 60
    }
    else{ // else block
        printf("You are not eligible for voting\n"); // this block is executed if age is less than or equal to 18

    }
    return 0;
}