//
//  main.c
//  2001
//
//  Created by rain on 2023/8/17.
//

#include <stdio.h>
#include <math.h>
int main() {
    double x1,y1,x2,y2;
    while (scanf("%lf %lf %lf %lf",&x1,&y1, &x2,&y2) == 4) {
        double x = x1-x2;
        double y = y1-y2;
        double d = sqrt(x*x + y*y);
        printf("%.2lf\n",d);
    }

   
    return 0;
}
