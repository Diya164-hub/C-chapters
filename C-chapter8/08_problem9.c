/* Write a program to check whether a given 
character is present in a string or not.*/

#include <stdio.h>
#include <string.h>

int main()
{
    char c = 'r';
    int contains = 0;
    char str[] = "Azkaban";
    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] == c)
        {
         contains = 1;
         break;
        }
    }
    if(contains)
    {
        printf("Yes it contains!\n");
    }
    else
    {
        printf("Does not contains!\n");
    }

    return 0;
}
// Output: if you write any letter of Azkaban you get output as "Yes it contains"
// if you don't tack any lettre from Azkaban yoo get output as "Dose not contains" 