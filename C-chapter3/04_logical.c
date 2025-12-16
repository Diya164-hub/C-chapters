#include <stdio.h>

int main(){
    int a=0; 
    int b=0;
    printf("The value of a and b is %d\n", a&&b); // 1 && 1 = 1 (true)
    printf("The value of a or b is %d\n", a||b);  // 1 || 1 = 1 (true)
    printf("The value of not a is %d\n", !a);     // !1 = 0 (false)

    if(a && b){
        printf("both are true\n");
    }
    // is same as writing....
    if(a){
        if(b){
            printf("both are true\n");
        }
    }
    return 0;
}