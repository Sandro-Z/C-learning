#include <stdio.h>
int main(){
    printf("请输入总金额：\n");
    int total;
    scanf("%d",&total);
    printf("请输入支付的金额：\n");
    int paid;
    scanf("%d",&paid);
    if (paid>total){
        printf("找您%d元\n",paid-total);
    }else{
        printf("还差%d元\n",total-paid);
    }
    return 0;
}