#include <stdio.h>
#include <string.h>
int isChineseCharacter(char c){
    //汉字的ASCLL码为负值
    if(c<0){
        return 1;
    }
    return 0;
}
int countChineseCharacter(const char* text){
    int count = 0;
    size_t len = strlen(text);
    for(int i=0; i<len; i++){
        if(isChineseCharacter(text[i])){
            count++;
        }
    }
    return count;
}
int main(int argc, const char * argv[]) {
    int n;
    while(scanf("%d", &n) == 1){
        getchar(); //读取换行符
        for(int i=0; i<n; i++){
            char input[1000];
            fgets(input, sizeof(input), stdin);
            int countChinese = countChineseCharacter(input);
            printf("%d\n", countChinese/2); //汉字有两个字节 所以要除以2
        }
    }
    return 0;
}

