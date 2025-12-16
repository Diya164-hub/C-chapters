#include <stdio.h>

int main(){
    FILE *fptr;
    fptr = fopen("01 D.txt", "w");
    int num = 45;
    fprintf(fptr, "%d\n", num);
    fclose(fptr);
    return 0;
}