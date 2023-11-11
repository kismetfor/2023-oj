//
//  main.c
//  2004
//
//  Created by rain on 2023/8/18.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int t ;
    while(scanf("%d",&t) == 1){
        switch(t/10){
            case 10:
            case 9:
                printf("A\n");
                break;
            case 8:
                printf("B\n");
                break;
            case 7:
                printf("C\n");
                break;
            case 6:
                printf("D\n");
                break;
            case 5:
            case 4:
            case 3:
            case 2:
            case 1:
                printf("E\n");
                break;
            default:
                printf("Score is error!\n");
                break;
        }
    }
    return 0;
}
//38809648    2023-08-18 16:40:53    Accepted    2004    15MS    1704K    784 B    C    HanRain
//少加了两个break语句 不能急躁 需要仔细练习
//it is never too late to learn something 加油吧!!
