// ASCII Values of Characters
// Check if a character is lowercase or not using its ASCII value
// https://www.cs.cmu.edu/~pattis/15-1xx/common/handouts/ascii.html
// ASCII Table and Description
// https://en.cppreference.com/w/c/language/operator_comparison
// C Operators and Expressions
#include <stdio.h>
int main(){
    char ch = 'A';
    printf("The character is %c\n", ch); // prints 97 , 122
    printf("The value of character is %d\n", ch);
    
    if(ch >= 97 && ch <= 122){
        printf("This character is lowercase\n");
    }
    else{
        printf("The character is not lowercase\n");
    }
    return 0;
}
