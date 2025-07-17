#include <stdio.h>
int main(){
    printf("请分别输入英尺和英寸的值，用空格分开：");
    double feet, inches;
    scanf("%lf %lf", &feet, &inches);
    float meters;
    meters=(feet+inches/12)*0.3048;
    printf("转换后的米数为：%f\n", meters);
    return 0;
}