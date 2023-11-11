
#include <stdio.h>

int main(int argc, const char * argv[]) {
    int n;
    while(scanf("%d", &n) == 1){
        for(int i=0; i<n; i++){
            double a, b, c;
            scanf("%lf %lf %lf", &a, &b, &c);
            if(a+b>c && a+c>b && c+b>a){
                printf("YES\n");
            }
            else{
                printf("NO\n");
            }
        }
    }
    return 0;
}
