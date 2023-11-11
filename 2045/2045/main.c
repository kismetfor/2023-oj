#include <stdio.h>
int countWays(int n){
    if(n == 1){
        return 3;
    }
    else if (n == 2){
        return 6;
    }
    else if (n == 3){
        return 6;
    }
    int de = 1; int num = 1;
    for (int i=2; i<n-1; i++) {
        de *= 2;
        num = de - num;
    }
    return (2*de-num)*6;
}
int main(int argc, const char * argv[]) {
    int n;
    while (scanf("%d", &n) == 1 && n>0 && n<=50) {
        int s = countWays(n);
        printf("%d\n", s);
    }
    return 0;
}
