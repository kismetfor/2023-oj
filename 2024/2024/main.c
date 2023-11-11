#include <stdio.h>
#include <string.h> //字符串操作
#include <ctype.h> //字符类型检测
int valid_identifier(char *str){
    size_t length = strlen(str);
    //检查长度
    if(length>50){
        return 0;
    }
    //检查第一个字符是否为字母或下划线
    if(!isalpha(str[0]) && str[0] != '_'){
        return 0;
    }
    //检查后续字符是否合法 从1开始
    for(int i = 1; i<length; i++){
        if(!isalnum(str[i]) && str[i] != '_'){
            return 0;
        }
    }
    return 1;
}
int main(){
    int n;
    scanf("%d", &n);
    getchar(); //做缓冲,防止fgets读取
    char str[51]; //identifier最长50位 加上结束字符\0最多51
    for(int i = 0; i<n; i++){
        fgets(str, sizeof(str), stdin);
        str[strlen(str)-1] = '\0'; //最后一位本来是换行符,现在替换为结束字符
        if(valid_identifier(str) == 1){
            printf("yes\n");
        }
        else
            printf("no\n");
    }
    
    return 0;
}

