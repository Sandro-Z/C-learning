#include <stdio.h>

void f(int *p){
    printf("p=%p\n",p);
    printf("*p=%d\n",*p);
    *p=20;
}

int main(){
    int i=5;
    f(&i);
    printf("i=%d\n",i);
}