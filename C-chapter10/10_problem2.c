/* Write a program to generate multiplication table 
of a given number in text format. Make sure that the 
file is readable and well formatted.*/

#include <stdio.h>

int main(){
    FILE *fptr;
    int num = 9;
    fptr = fopen("01 D.txt", "a");

    for (int i = 0; i < 10; i++)
    {
        fprintf(fptr, "%d x %d = %d\n", num, i+1, num*(i+1));
    }
    
    return 0;
}