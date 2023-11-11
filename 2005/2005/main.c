#include <stdio.h>
//判断是否为闰年 isLeapYear 是返回1 不是返回0
int isLeapYear(int year){
    if((year%4 == 0 && year%100 != 0) || year%400 == 0){
        return 1;
    }
    return 0;
}

int daysOfYear(int year, int month, int day){
    //计算某一个个月的天数
    int daysInMonth[] = {0,31,28,31,
        30,31,
        30,31,
        31,30,
        31,30,
        31
    };
    //是闰年2月份日期29天
    if(isLeapYear(year) == 1){
        daysInMonth[2] = 29;
    }
    int totalDays = 0;
    for(int i = 0; i< month; i++){
        totalDays += daysInMonth[i];
    }
    totalDays += day;
    return totalDays;
}
int main(){
    int year;
    int month;
    int day;
    while(scanf("%d/%d/%d", &year, &month, &day) == 3){
        int result = daysOfYear(year, month, day);
        printf("%d\n",result);
    }
    return 0;
}
