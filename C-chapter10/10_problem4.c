/* Take name and salary of two employees as input
from the user and write them to a text filein the following format:
i.  Name1 , 3300
ii. Name2 , 7700*/

#include <stdio.h>

int main(){
    FILE *ptr;
    char name1[34];
    char name2[34]; 
    int salary1;
    int salary2;
    ptr = fopen("01 D.txt", "w");

    printf("Enter the name of first employee:\n");
    scanf("%s", name1);
    printf("Enter the salary of first employee:\n");
    scanf("%d", &salary1);

    printf("Enter the name of second employee:\n");
    scanf("%s", name2);
    printf("Enter the salary of second employee:\n");
    scanf("%d", &salary2);

    fprintf(ptr, "%s , %d\n", name1, salary1);
    fprintf(ptr, "%s , %d\n", name2, salary2);

    return 0;
}