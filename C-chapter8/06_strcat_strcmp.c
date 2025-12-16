#include <stdio.h>
#include <string.h>

int main()
{
    char st[] = "Ms Granger:";
    char s1[60] = "Hello,";
    char s2[60] = "Mr Potter";

    char target[30];

    // Copy string
    strcpy(target, st);
    // printf("%s ", st, target);

    // Concatenate strings
    strcat(s1, s2);
    // printf("%s", s1, target);

    int a = strcmp("joke", "far"); 
    // strcmp("far", "joke") : negative value
    // strcmp("joke", "far") : positive value
    printf("%d", a);
    return 0;
}
// Output: Ms Granger: Hello, Mr Potter