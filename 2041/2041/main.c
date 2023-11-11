//
//  main.c
//  2041
//
//  Created by rain on 2023/9/20.
//动态规划

#include <stdio.h>
long long countWays(int m){
    long long dp[41];
    dp[2] = 1;
    dp[3] = 2;
    for (int i=4; i<=m; i++){
        dp[i] = dp[i-1] + dp[i-2];
    }
    return dp[m];
}
int main(int argc, const char * argv[]) {
    int n;
    scanf("%d", &n);
    for (int i=0; i<n; i++) {
        int m;
        while (scanf("%d", &m)==1 && m>=1 && m<=40) {
            long long sum = countWays(m);
            printf("%lld\n", sum);
        }
    }
    return 0;
}
