//
//  main.c
//  2009
//
//  Created by rain on 2023/8/20.
//

#include <stdio.h>
#include <math.h>
int main(int argc, const char * argv[]) {
    double n;
    int m;
    while(scanf("%lf %d", &n, &m) == 2){
        double sum = 0;
//        for(int i = 0; i< m ;i++){
//            sum += n;
//            n = sqrt(n);
//
//        }
        //算法优化
        for(int i = 1; i< m ;i++){
            n = sqrt(n);
            sum = (sum+1)*n;
        }
        sum = (sum+1)*n; //最后一个乘的和倒数第二一样
        printf("%.2lf\n",sum);
    }
    return 0;
}
