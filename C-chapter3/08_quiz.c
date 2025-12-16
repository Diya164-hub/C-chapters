#include <stdio.h>

int main(){
    /*  
    Quick Quix: Write a program to find grade of a student given his marks based on below:
        90 - 100 => A
        80 - 90 => B
        70 - 80 => C
        60 - 70 => D
        50 - 60 => E
        <50 => F
    */
   char c;
   int marks = 85;
   if(marks<=100 && marks>=90){
      marks ='A';
    }
    else if(marks<90 && marks>=80){
       marks ='B';
    }
    else if(marks<80 && marks>=70){
       marks ='C';
    }
    else if(marks<70 && marks>=60){
       marks ='D';
    }
    else if(marks<60 && marks>=50){
        marks ='E';
    }
    else if(marks<50){
        marks ='F';
    }

    return 0;
}