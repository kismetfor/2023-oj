//
//  main.c
//  2049
//
//  Created by rain on 2023/9/28.
//

#include <stdio.h>
long long countWays(int n){ //计算全错排函数
    long long way[20];
    way[1] = 0;
    way[2] = 1;
    way[3] = 2;
    for (int i=4; i<=n; i++) {
        way[i] = (i-1)*(way[i-2]+way[i-1]);
    }
    return way[n];
}
long long zuhe(int n, int m){ //计算组合
    if (m == 0) {
        return 1;
    }
    if (m == 1) {
        return n;
    }
    int up = 1;
    int down = 1;
    for (int i=n; i>=m; i--) {
        up *= i;
    }
    for (int i=m; i>1; i--) {
        down *= i;
    }
    long long s = 1;
    s = up / down;
    return s;
}
int main(int argc, const char * argv[]) {
    int C;
    scanf("%d", &C);
    while (C--) {
        int n, m;
        scanf("%d %d", &n, &m);
        long long a = countWays(m);
        long long b = zuhe(n, n-m);
        long long s = a*b;
        printf("%lld\n", s);
    }
    return 0;
}
