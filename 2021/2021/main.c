#include <stdio.h>
int main(){
    int n; //是老师人数
    while(scanf("%d",&n) == 1 && n<100){
        if(n == 0){break;} //退出循环
        int salaries[100];
        for(int i=0; i<n; i++){
            scanf("%d",&salaries[i]);
        }
        int bill[] = {100, 50, 10, 5, 2, 1}; //纸币面额
        int total_bills = 0; //总的需要的人民币的数量
        for(int i=0; i<n; i++){
            int remaining_salary = salaries[i]; //初始化需要使用的剩余工资后续运算在他的身上
            for(int j=0; j<6; j++){
                int num_bills; //当前老师 当前面额纸币的张数 暴力算法 局部最优构建全局最优
                num_bills = remaining_salary/bill[j];
                total_bills += num_bills;
                remaining_salary -= bill[j]*num_bills;
            }
        }
        printf("%d",total_bills);
    }
    return 0;
}
///38839049    2023-08-27 20:24:59    Accepted    2021    31MS    1688K    834 B    C
///数据不消息输错了找了很久的错误
