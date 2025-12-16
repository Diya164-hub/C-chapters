#include <stdio.h>

int main(){
    int marks1, marks2, marks3;
    // int value_of_Diyas_marks;
    // int value_of_blablas_marks;
    // prinft("%d" , value_of_diyas_marks);
    printf("Enter marks1: \n");
    scanf("%d", &marks1);
    printf("Enter marks2: \n");
    scanf("%d", &marks2);
    printf("Enter marks3: \n");
    scanf("%d", &marks3);
    printf("Marks1: %d, Marks2: %d, Marks3: %d\n", marks1, marks2, marks3);


    if(marks1<33 || marks3<33){
        printf("You are failed due to less marks in individual subject(s)");
    }
    else if((marks1 + marks2 + marks3)/3 < 40){
        printf("You are failed due to less overall percentage");
    }
    else{
        printf("You are passed");
    }   
    return 0;
}