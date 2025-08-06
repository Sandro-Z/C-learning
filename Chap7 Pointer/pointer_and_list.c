#include <stdio.h>

int a[];
int *p=a;
int main(){
    printf("%p\n",a);
    p[0]=10;//*p等于a之后p为a的指针变量
    printf("%d\n",p[0]);
    printf("%d\n",a[0]);
    printf("%p\n",&p[0]);
    printf("%d\n",*a);
}