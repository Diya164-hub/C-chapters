// Relational Operators in C 
// == : Equals // >= : greater than or equals 
// <= : less than or equals // != : not equals
// > : greater than // < : less than
#include <stdio.h>
int main(){
    
    if(1){
        printf("This if is executed\n");
  }
  if(2345){
        printf("This if is also executed\n");
    }
    if(-23){
        printf("This if is also executed\n");
    }
     if(0){
        printf("This if is not executed\n");
    }
    if(2.345){
        printf("This if is also executed\n");
    } // charector never executed
     if('a'){
        printf("This if is also executed\n");
    } // if you wante to execute charector so need to write between ''
     if(' '){
        printf("This if is also executed\n");
    } 
     if('\n'){
        printf("This if is also executed\n");
    } 
     if(NULL){
        printf("This if is not executed\n");
    }
     if((void*)0){
        printf("This if is not executed\n");
    }
     if((void*)23){
        printf("This if is also executed\n");
    }
     if((void*)-23){
        printf("This if is also executed\n");
    }   
     if((void*)2345){
        printf("This if is also executed\n");
    }
     if((void*)-2345){
        printf("This if is also executed\n");
    }   
     if((void*)1){
        printf("This if is also executed\n");
    }   
     if((void*)-1){
        printf("This if is also executed\n");
    }
     if((void*)123456){
        printf("This if is also executed\n");
    }   
     if((void*)-123456){
        printf("This if is also executed\n");
    }   
    return 0;
}

// Logical Operators in C
// && : Logical AND ; is true when both the conditions are true
    // 1 and 0 is evaluated to false
    // 1 and 1 is evaluated to true
    // 0 and 0 is evaluated to false
// || : Logical OR 
    // is true when at least one condition is true
    // 1 or 0 is 1
    // 0 or 0 is 0
    // 1 or 1 is 1
// ! : Logical NOT 
    // return true if given false and false if gives true
    // !(3==3) is evaluates to false
    // !(3>30) is evaluates to true