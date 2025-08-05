#include <stdio.h>
int main(){
    int i;
    printf("请输入一个整数：\n");
    scanf("%d", &i);
    if (i>1){
        printf("%d>1\n",i);
    } else if (i<1){
        printf("%d<1\n",i);
    } else {
        printf("%d=1\n",i);
    }
    return 0;
}