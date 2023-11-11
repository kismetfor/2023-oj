//
//  main.c
//  2046
//
//  Created by rain on 2023/9/21.
//

#include <stdio.h>

long long countWays(int n){
    long long ways[51];
    ways[1] = 1;
    ways[2] = 2;
    for (int i=3; i<=n; i++) {
        ways[i] = ways[i-1] + ways[i-2];
    }
    return ways[n];
}
int main(int argc, const char * argv[]) {
    int n;
    while (scanf("%d", &n) == 1 && n>0 && n<=50) {
        long long s = countWays(n);
        printf("%lld\n", s);
    }
    return 0;
}
