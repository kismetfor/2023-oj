#include<stdio.h>
int main(void){
    int m; //测试示例的个数
    scanf("%d",&m);
    for(int i=0; i<m; i++){
        //有m个循环m次
        int n;
        scanf("%d",&n);
        double sum = 0;
        int sign = 1; //用于存储正负号
        for(int j=1; j<=n; j++){
            sum += sign/(double)j; //将j转化为double类型
            sign *= -1;
        }
        printf("%.2lf\n",sum);
    }
    
    return 0;
}
//38818689    2023-08-21 23:43:05    Accepted    2011    15MS    1692K    417 B    C    HanRain
//简单嘿嘿  神奇滴
