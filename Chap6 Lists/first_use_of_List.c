#include <stdio.h>

int main(){
    int list[100];
    int cnt = 0; // 计数器，记录当前元素个数
    int x;
    scanf("%d", &x); // 输入一个整数
    while (x!=-1){
        list[cnt]=x;
        cnt++;
        scanf("%d", &x); // 继续输入下一个整数
    }
    // printf("%d",list);//无法正确的输出数组
    double sum=0;
    for (int i=0;i<cnt;i++){
        sum += list[i]; // 计算总和
    }
    double average = sum / cnt;
    printf("Average:%f\n", average); // 输出平均值

    for(int i=0;i<cnt;i++){
        if (list[i] > average) {
            printf("%d ", list[i]); // 输出大于平均值的元素
        }
    }
}