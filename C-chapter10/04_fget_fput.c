#include <stdio.h>

int main(){
    FILE *ptr;
    ptr = fopen("01 D.txt", "a");
    // char c = fgetc(ptr); // reads a single character from the file
    // printf("%c", c);
    fputc('c', ptr); // writes a single character to the file
    return 0;
}