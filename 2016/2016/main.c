
#include <stdio.h>

int main(int argc, const char * argv[]) {
    int n;
    while(scanf("%d",&n) == 1 && n<100){
        if(n == 0){break;}
        int array[1000] = {0};
        for(int i=0; i<n; i++){
            scanf("%d",&array[i]); //得到输入的值
        }
        int min = array[0]; //赋值以后少循环一次,i从1开始
        for(int i = 1; i<n; i++){
            if(array[i]<min){
                min = array[i]; //找到最小值min
            }
        }
        for(int i=0; i<n; i++){
            if(array[i] == min){ //找到min对应的i下标
                min = array[0]; //min在这里当做temp用
                array[0] = array[i];
                array[i] = min;
            }
        }
        //输出
        for(int i=0; i<n; i++){
            printf("%d ",array[i]);
        }
    }
    return 0;
}
//38835044    2023-08-26 19:59:15    Accepted    2016    15MS    1692K    807 B    C    HanRain
//还得是暴力算法 一遍过
