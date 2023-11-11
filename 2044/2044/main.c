//
//  main.c
//  2044
//
//  Created by rain on 2023/9/21.
//

#include <stdio.h>
long long countWays(int a, int b){
    long long ways[51];
    ways[1] = 1;
    ways[2] = 2;
    ways[3] = 3;
    for (int i = 4; i <= b-a; i++) {
        ways[i] = ways[i-1] + ways[i-2];
    }
    return ways[b-a];
}
int main(int argc, const char * argv[]) {
    int n;
    scanf("%d", &n);
    while (n--) {
        int a,b;
        scanf("%d %d", &a, &b);
        long long s = countWays(a, b);
        printf("%lld\n", s);
    }
    return 0;
}
