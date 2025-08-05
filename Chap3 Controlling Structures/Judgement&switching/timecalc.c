#include <stdio.h>
int main(){
    int hour1,minute1;
    int hour2,minute2;
    scanf("%d:%d",&hour1,&minute1);
    scanf("%d:%d",&hour2,&minute2);
    int periodHour=hour2-hour1;
    int periodMinute=minute2-minute1;
    if (periodMinute<0){
        periodMinute+=60;
        periodHour--;
    }
    printf("相差%d小时%d分钟\n",periodHour,periodMinute);
    return 0;
    
}