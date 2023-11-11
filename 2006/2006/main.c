
#include <stdio.h>
int main(){
    while(1){
        int n;
        if(scanf("%d",&n) != 1){
            break; //没有输入就退出循环;
        }
        int product = 1; //存储奇数乘积
        for(int i = 0; i < n; i++){ //循环n次得到n个num
            int num;
            scanf("%d",&num);
            if(num%2 == 1){
                product *= num;
            }
        }
        printf("%d\n",product);
    }
     return 0;
}
