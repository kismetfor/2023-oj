//
//  main.c
//  2008
//
//  Created by rain on 2023/8/20.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int n; //输入n个数
    while(1){
        scanf("%d",&n);
        if(n == 0){ //n=0时结束循环
            break;
        }
        int a = 0; //负数
        int b = 0; //0
        int c= 0; //正数
        for(int i = 0; i<n; i++){
            double num; //输入的数
            scanf("%lf",&num);
            if(num<0){
                a++; //负数
            }
            else if (num == 0){
                b++; //0
            }
            else
                c++; //正数
        }
        printf("%d %d %d",a, b, c);
    }
    return 0;
}
//真正意义上的一遍过!!!!!!!!
