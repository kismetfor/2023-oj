
#include <stdio.h>

int main(int argc, const char * argv[]) {
    int N,R;
    while(scanf("%d %d", &N, &R) == 2 && 2<=R && R<=16){
        if(N<0){
            int a[100];
            int count = 0;
            N *= -1;
            for(int i = 0; N != 0; i++){
                a[i] = N % R;
                N /= R;
                count++;
            }
            //输出
            printf("-");
            for(int i = count - 1; i>=0; i--){
                if(a[i] >= 10 && a[i] <= 15){
                    printf("%c",a[i]+'A'-10);
                }
                else
                    printf("%d", a[i]);
            }
        }
        else{
            int a[100];
            int count = 0;
            for(int i = 0; N != 0; i++){
                a[i] = N % R;
                N /= R;
                count++;
            }
            //输出
            for(int i = count - 1; i>=0; i--){
                if(a[i] >= 10 && a[i] <= 15){
                    printf("%c",a[i]+'A'-10);
                }
                else
                    printf("%d", a[i]);
            }
        }
        printf("\n");
    }
    return 0;
}
//38872945    2023-09-04 19:47:56    Accepted    2031    15MS    1692K    1146 B    C    HanRain过了 真是心累 判断条件写错了....写的是n/r != 0
//忽略了是负数的情况 int取整数是离0近的数
