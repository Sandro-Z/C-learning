#include <stdio.h>
int main(){
    int a=10;
    printf("a++=%d\n",a++);//返回++之前的值
    printf("a=%d\n",a);
    printf("++a=%d\n",++a);//返回++之后的值
    printf("a=%d\n",a);
    return 0;
}