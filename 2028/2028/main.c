//
//#include <stdio.h>
//#include "stdlib.h"
//int main(int argc, const char * argv[]) {
//    int n; //每个测试实例的开始是一个正整数n，然后是n个正整数。
//    while(scanf("%d", &n) == 1){
//        int *num = (int *)malloc(n*sizeof(int));
//        for(int i=0; i<n; i++){//读取输入
//            scanf("%d", &num[i]);
//        }
//        //gcd greastest common divisor 最大公约数
//        int gcd = 1;
//
//        for(int i=0; i<n-1; i++){//读取输入
//            int min = num[i];
//            if(num[i] > num[i+1]){
//                min = num[i+1];
//            }
//            for(int j=min; j>0; j--){//读取输入
//                if(num[i]%j == 0 && num[i+1]%j ==0){
//                    gcd = j;
//                    break;
//                }
//            }
//            num[i+1] = num[i]*num[i+1]/gcd;
//        }
//        printf("%d\n",num[n-1]);
//    }
//    return 0;
//}

#include <stdio.h>
long long GCD(long long a, long long b){//欧几里得算法
    if(a>b){
        long long temp = a;
        a = b;
        b = temp;
    }
    if(b%a == 0){return a;}
    return GCD(a, b%a);
}
int main(){
    long long n;
    while(scanf("%lld",&n) == 1 && n>0){
        long long num1, num2;
        scanf("%lld", &num1);
        for(int i = 0; i<n-1; i++){
            scanf("%lld",&num2);
            long long gcd = GCD(num1, num2); //最大公倍数
            long long lcm = num1*num2/gcd; //最小公约数
            num1 = lcm;
        }
        printf("%lld\n",num1);
    }
    return 0;
}
