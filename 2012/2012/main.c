//
//  main.c
//  2012
//
//  Created by rain on 2023/8/21.
//

#include <stdio.h>
int isPrime(int num){ //判断是否为素数
    if(num <= 1){ //素数大于1，并且只能被1和本身整除
        return 0;
    }
    for(int i=2; i*i<=num; i++){
        if(num%i == 0){
            return 0; //不是素数
        }
    }
    return 1; //是素数返回1
}

int main(int argc, const char * argv[]) {

    int x;
    int y;
    while((scanf("%d %d", &x, &y) == 2) && (x>=-39) && (x<y) && (y<=50)){
        if((x==0)&&(y==0)){break;}
        int count = 0; //找素数的个数
        for(int n = x; n<=y; n++){
            int temp = 0;
            temp = n*n+n+41;
            if(isPrime(temp) == 1){
                count++; //计数,如果素数数量和循环的次数相等那么 输出OK
            }
        }
        if(count == (y-x+1)){
            printf("OK\n");
        }
        else
            printf("Sorry\n");
    }
    return 0;
}
//38832957    2023-08-26 15:09:50    Accepted    2012    15MS    1692K    904 B    C    HanRain
