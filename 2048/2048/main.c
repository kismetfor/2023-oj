#include <stdio.h>

int countWays(int n){
    int way[20];
    way[1] = 0;
    way[2] = 1;
    way[3] = 2;
    for (int i=4; i<=n; i++) {
        way[i] = (i-1)*(way[i-2]+way[i-1]);
    }
    return way[n];
}
int factorial_n(int n){
    int s = 1;
    for (int i=n; i>1; i--) {
        s *= i;
    }
    return s;
}
double sishewuru(int up, int down){
    double s = (double)up / (double)down;
    s *= 10000;
    int a = (int)(s+0.5);
    s = (double)a/100;
    return s;
}
int main(){
    int C;
    scanf("%d", &C);
    while (C--) {
        int n;
        scanf("%d", &n);
        int up = countWays(n);
        int down = factorial_n(n);
        double s = sishewuru(up, down);
        printf("%.2f%%\n", s);
    }
    return 0;
}
