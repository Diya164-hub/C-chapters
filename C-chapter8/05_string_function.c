#include <stdio.h>
#include <string.h>

int main(){

    char st[] = "Harry Potter";
  
 // printf("%d\n", strlen(st));
   char target[30];
   strcpy(target, st); // target now contains"Harry Potter"
   printf("%s ", st, target);
    return 0;
}