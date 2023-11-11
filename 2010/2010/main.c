//
//  main.c
//  2010
//
//  Created by rain on 2023/8/21.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int m;
    int n;
    while ((scanf("%d %d", &m, &n) == 2) && (m>0) && (n>m)) {
        int a; //百分位
        int b; //十分位
        int c; //千分位
        int array[1000];
        int count = 0; //用于给水仙花计数
        int found = 0; //用于标记是否找到水仙花数
        for(int i=m;i<=n;i++){
            a = i/100;
            b = i%100/10;
            c = i%10;
            if(a*a*a+b*b*b+c*c*c == i){ //是水仙花数
                array[count] = i; //将水仙花数存储到数组中
                count++;
                found = 1;
            }
        }
        
        if(found){
            //从小到大排序
            for(int i=0;i<count-1;i++){
                for(int j=0;j<count-i-1;j++){
                    int temp = 0;
                    if(array[j]>array[j+1]){
                        temp = array[j];
                        array[j] = array[j+1];
                        array[j+1] = temp;
                    }
                }
            }
            //输出
                for(int i=0;i<count;i++){
                    printf("%d ",array[i]);
                }
        }
        else
            printf("no");
    }
    return 0;
}
