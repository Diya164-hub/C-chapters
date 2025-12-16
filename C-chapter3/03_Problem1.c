#include <stdio.h>

int main(){
    int a = 10;
    if(a = 11) // a=11 is assignment not comparison
    printf("I am 11");
    else
    prinntf("I am not 11");
      
    return 0;
}
// output will be "I am 11" because in the if condition, assignment operator (=) is used instead of comparison operator (==). This assigns the value 11 to 'a', which is non-zero and thus evaluates to true.