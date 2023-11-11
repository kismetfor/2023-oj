//
//  main.c
//  2047
//
//  Created by rain on 2023/9/23.
//

#include <stdio.h>
int countWays(int n){
    int j[51] = {0};
    int k[51] = {0};
    j[1] = 2;
    k[1] = 1;
    for (int i=2; i<=n; i++) {
        while (j[i-1]--) {
            j[i] += 2;
            k[i] += 1;
        }
        while (k[i-1]--) {
            j[i] += 2;
        }
    }
    return j[n]+k[n];
}
int main(int argc, const char * argv[]) {
    int n;
    while (scanf("%d", &n) == 1 && n>0 && n<40) {
        int result = countWays(n);
        printf("%d\n", result);
    }
    return 0;
}
