#include <stdio.h>
int main(){
    float a,b,c;
    a=1.345f;
    b=1.123f;
    c=a+b;
    if (c== 2.468) {
        printf("The sum is correct: %f\n", c);
    } else {
        printf("The sum is incorrect: %f\n", c);
    }
}