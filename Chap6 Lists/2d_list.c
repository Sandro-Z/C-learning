#include <stdio.h>

int main(){
    const int size=3;
    int board[size][size]; // 定义一个3x3的二维数组
    int X= 0, O = 0; // 计数器，分别记录X和O的个数
    int result=-1;
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            scanf("%d", &board[i][j]); // 输入二维数组的元素
        }
    }
    for (int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            if (board[i][j] == 1) {
                X++;
            } else if (board[i][j] == 2) {
                O++;
            }
        }
        if (X == size) {
            result = 1; // X赢了
        } else if (O == size) {
            result = 2; // O赢了
        }
    }
    for (int j=0;j<size;j++){
        for(int i=0;i<size;i++){
            if (board[i][j] == 1) {
                X++;
            } else if (board[i][j] == 2) {
                O++;
            }
        }
        if (X == size) {
            result = 1; // X赢了
        } else if (O == size) {
            result = 2; // O赢了
        }
    }
    for (int i=0;i<size;i++){
        if (board[i][i] == 1) {
            X++;
        } else if (board[i][i] == 2) {
            O++;
        }
    }
    for (int i=0;i<size;i++){
        if (board[i][size-i-1] == 1) {
            X++;
        } else if (board[i][size-i-1] == 2) {
            O++;
        }
    }
}