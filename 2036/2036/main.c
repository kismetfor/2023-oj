#include <stdio.h>
int cs(int x1, int y1, int x2, int y2){
    return x1 * y2 - x2 * y1;
}
double shoe(int x[], int y[], int n){
    double sum = 0.0;
    for (int i=0; i<n; i++) {
        int x1 = x[i];
        int y1 = y[i];
//        int x2 = x[(i+1)%n];
//        int y2 = y[(i+1)%n];
        int x2 = x[i+1];
        int y2 = y[i+1];
        if(i == n-1){
            x2 = x[0];
            y2 = y[0];
        }
        sum += cs(x1, y1, x2, y2);
    }
    return sum;
}
int main(){
    int n;
    while (scanf("%d", &n) == 1 && 3<=n && n<=100) {
        if(n == 0){break;}
        int x[100], y[100];
        for (int i=0; i<n; i++) {
            scanf("%d", &x[i]);
            scanf("%d", &y[i]);
        }
        //调用函数
        double area = shoe(x, y, n);
        printf("%.1lf\n", area/2.0);
    }
    return  0;
}
