//
//  main.c
//  2000
//
//  Created by rain on 2023/8/16.
//
#include<stdio.h>
int main(void){
    char a, b, c;
    //获取输入的字符
    while(scanf("%c%c%c", &a, &b, &c) != EOF){
        getchar();
        //consume a NEWLINE character
        
        //比较大小 小的留下 现在找最小的
        char smallest = ((a<b?a:b) < c ? (a<b?a:b):c);
        //找最大的
        char biggest = ((a<b?b:a)<c?c:(a<b?b:a));
        //找中间的
        char middle;
        if(a != smallest && a != biggest)
            middle = a;
        else if (b != smallest && b != biggest)
            middle = b;
        else
            middle = c;
        //输出升序的字符
        printf("%c%c%c\n",smallest, middle, biggest);
    }
   
    
    return 0;
}
