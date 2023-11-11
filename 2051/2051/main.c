//
//  main.c
//  2051
//
//  Created by rain on 2023/10/1.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int n;
    while (scanf("%d", &n) == 1) {
        int flag = 0;
        for (int i=512; i>0; i/=2) {
            if(n-i >= 0){
                printf("1");
                n -= i;
                flag = 1;
            }
            else{
                if(flag){
                    printf("0");
                }
                /*其实按照题目上的要求
                1
                0000000001
                2
                0000000010
                3
                0000000011
                 我这样是不对的
                 不应该输出前面的0
                 这里我直接改了 用flag记录
*/
            }
        }
        printf("\n");
    }
    return 0;
}
