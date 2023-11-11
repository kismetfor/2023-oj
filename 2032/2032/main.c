
#include <stdio.h>

int main(int argc, const char * argv[]) {
    int n;
    while(scanf("%d", &n) == 1 && n>=1 && n<=30){
        int a[31][31];
        //初始化为1的地方
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                a[i][0] = 1;
                if(i == j){
                    a[i][j] = 1;
                }
            }
        }
        //从第三行开始
        for(int i=2; i<n; i++){
            for(int j=1; j<i; j++){
                a[i][j] = a[i-1][j-1] + a[i-1][j];
            }
        }
        //输出
        for(int i=0; i<n; i++){
            for(int j=0; j<i+1; j++){
                printf("%d ", a[i][j]);
                }
            printf("\n");
            }
        }
    return 0;
}
//38874534    2023-09-04 23:28:24    Accepted    2032    15MS    1700K    748 B    C    HanRain一遍过嘿嘿 开心
