#include <stdio.h>
int main(){
    printf("请输入分数:\n");
    int score;
    scanf("%d",&score);
    int score1 = score / 10;
    switch (score1){
        case 10:
        case 9:
            printf("A\n");
            break;
        case 8:
            printf("B\n");
            break;
        case 7:
            printf("C\n");
            break;
        case 6:
            printf("D\n");
            break; 
        default:
            printf("F\n");
            break;
    }
}