
#include <stdio.h>

int main(int argc, const char * argv[]) {
    int n; //n名评委
    while((scanf("%d",&n) == 1) && (n>2) && (n<=100)){
        int array[1000]; //存储得分
        for(int i=0; i<n; i++){
            scanf("%d",&array[i]);; //输入得分
        }
        //最大
        int max = array[0];
        for(int i=0; i<n; i++){
            if(array[i]>max){
                max = array[i];
            }
        }
        //最小
        int min = array[0];
        for(int i=0; i<n; i++){
            if(array[i]<min){
                min = array[i];
            }
        }
        //求和
        int sum = 0;
        for(int i=0; i<n; i++){
            if((array[i] == max) || (array[i] == min)){
                continue;
            }
            sum += array[i];
        }
        //求平均值
        double ave;
        //至少保证有一个数是浮点数,不然会进行整数截断
        ave = (double)sum/(double)(n-2);
        //输出
        printf("%.2lf\n",ave);
    }
    return 0;
}
