//
//  main.c
//  2002
//
//  Created by rain on 2023/8/17.
//

#include <stdio.h>
#define PI 3.1415927
int main() {
     double  r ;
     while(scanf("%lf",&r) == 1){
         double v = 4.0 / 3.0 * PI * r * r * r;
         printf("%.3lf\n",v);
     }
    return 0;
}
//8809496    2023-08-18 16:03:03    Accepted    2002    31MS    1692K    206 B    C    HanRain
