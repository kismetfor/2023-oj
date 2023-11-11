//
//  main.c
//  2013
//
//  Created by rain on 2023/8/26.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int n;
    while(scanf("%d",&n) == 1){
        int x = 1; //第n天的桃子数量
        for(int i = n; i>1; i--){
            x = (x+1)*2;
        }
        printf("%d\n",x);
    }
    
    return 0;
}
