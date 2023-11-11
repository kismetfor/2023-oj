//
#include <stdio.h>
#include <math.h>

int main() {
    int n, m;
    while (scanf("%d %d", &n, &m) == 2 && n>=1 && n<=10000 && m>=1 && m<=10000) {
        if(n==0 && m==0){
            break;
        }
        int s = 1;
        for (int i=0; i<m; i++) {
            s = (s * n) % 1000;
        }
        printf("%d\n", s);
    }
    return 0;
}
