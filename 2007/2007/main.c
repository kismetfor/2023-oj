#include <stdio.h>
int main() {
    int m;
    int n;
    int t;
    //从m到n
    while(scanf("%d %d",&m,&n) == 2){
        //m必须小于n
        if(m>n){
            t = m;
            m = n;
            n = t;
        }
        int x = 0; //偶数的平方和
        int y = 0; //奇数的立方和
        for(int i = m; i<=n; i++){
            if(i%2 == 0){
                //偶数
                x += i*i;
              }
            else{
                //奇数
                y += i*i*i;
            }
        }
       printf("%d %d\n",x, y);
    }
   return 0;
}
