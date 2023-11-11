//
//  main.c
//  2050方法二
//
//  Created by rain on 2023/10/1.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int C;
    scanf("%d", &C);
    while (C--) {
        int n;
        scanf("%d", &n);
        printf("%d\n", (2*n+1)*(n-1)+2);
        //也可以是
//        printf("%d\n", 2*n*n-n+1);
    }
    return 0;
}
