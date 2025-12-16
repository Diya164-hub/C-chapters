#include <stdio.h>

int main()
{
    char st[] = "Harry potter"; // same as char st[] = {'a', 'b', 'c', '\0'};
    // for (int i = 0; i < 12; i++)
    // {
    //     printf("%c", st[i]);
    // }
    // if you write this: printf("%s", st); you don't need to write "for loop"
    
    printf("%s", st); 
 // here you remove "for loop//" you need to do // before "printf"
   
    return 0;
}
// output: Harry potter