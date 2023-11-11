//
//  main.c
//  2003
//
//  Created by rain on 2023/8/18.
//

#include <stdio.h>
#include <math.h>
int main(int argc, const char * argv[]) {
    double x;
    while(scanf("%lf",&x) == 1){
        if(x<0){
            printf("%.2lf\n",0-x);
        }
        else
            printf("%.2lf\n",x);
    }
    return 0;
}
//38809542    2023-08-18 16:10:42    Accepted    2003    15MS    1688K    258 B    C    HanRain
//一遍过
