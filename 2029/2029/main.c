#include <stdio.h>
#include <string.h>
#include <ctype.h>
int isLevel(char* str){ //判断是否为回文
    int i = 0;
    size_t j = strlen(str) - 2 ; //减一去除末尾换行符
    //strlen 返回的是 size_t
    while(i<j){
        //忽略空白字符 测试了一下 这个功能不需要
        while(i<j && !isalnum(str[i])){
            i++;
        }
        while(i<j && j>=0 && !isalnum(str[j])){
            j--;
        }
        if(tolower(str[i]) != tolower(str[j])){ //无论大小写
            return 0;
            
        }
        i++;
        j--;
    }
    return 1;
}
int main(int argc, const char * argv[]) {
    int n;
    while(scanf("%d", &n) == 1){
        //需要读取输入中的换行符
        getchar();
        for(int i=0; i<n; i++){
            char input[100];
            fgets(input, sizeof(input), stdin);
//            input[strcspn(input, "\n")] = '\0'; // 去除换行符
            //换行符无需去除 直接-2
            if(isLevel(input)){
                printf("yes\n");
            }
            else{
                printf("no\n");
            }
        }
    }
    return 0;
}
