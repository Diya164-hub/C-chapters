/* Write a program to encrypt a stirng by adding 1 to 
the ascli value of its characters.*/

#include <stdio.h>
#include <string.h>

int main(){
    char str[] = "Azkban";
    for (int i = 0; i < strlen(str); i++)
    {
        str[i] = str[i] + 1;
    }
    printf("%s", str);
    return 0;
}