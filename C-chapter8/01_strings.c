// chapter 8: Strings
#include <stdio.h>

int main(){
    // thhis is initializing strings
    // char st[] = {'a', 'b', 'c', '\0'};
   char st[] = "Harry potter"; //same as char st[] = {'a', 'b', 'c', '\0'};
   for (int i = 0; i < 12; i++)
   {
    printf("Character is %c\n", st[i]);
   }
    return 0;
}
/*Output: H
          r
          r
          y
          
          p
          o
          t
          t
          e
          r*/
/* A string is a 1 - D character array terminated by a null character ('\0)
A null character is used to denote the termination of a string.
Characters are stored in contiguous memory locations. 
'\0' is null character */
/* char st[] = "Harry potter"; // In this case C adds a 
null character automatically. */