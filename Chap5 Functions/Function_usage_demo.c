#include <stdio.h>

int isPrime(int n){//函数的基本用法
    int flag=1;
    if (n<=1){
        flag=0;
    } else{
        for (int i=2;i*i<=n;i++){
            if (n%i==0){
                flag=0;
                break;
            }
        }
    }
    return flag;
}

int sum(int start,int end){//双参数函数
    int sum=0;
    for (int i=start;i<=end;i++){
        sum += i;
    }
    return sum;
}

int a=1,b=2;
int swap(int x,int y);//函数原型的声明


int main(){
    for (int i=1;i<=100;i++){
        if (isPrime(i)){
            printf("%d ",i);
        }
    }
    printf("\n");
    printf("1加到100=%d\n",sum(1,100));
    printf("50加到1000=%d\n",sum(50,1000));
    swap(a,b);
    printf("a=%d,b=%d\n",a,b); // 这里的a和b不会被交换，因为swap函数没有返回值且没有修改全局变量
}
int swap(int x,int y){
    int temp=x;
    x=y;
    y=temp;
}
