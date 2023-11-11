
#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(int argc, const char * argv[]) {
    int n; //测试个数
    while(scanf("%d", &n) == 1){
        getchar(); // 消耗掉输入缓冲区中的换行符
        char input[101];
        for(int i=0; i<n; i++){
            fgets(input, sizeof(input), stdin);
            int len = strlen(input);
            int count[5] = {0};
            for(int j = 0; j<len; j++){
                if(input[j] == 'a'){
                    count[0]++;
                }
                else if(input[j] == 'e'){
                    count[1]++;
                }else if(input[j] == 'i'){
                    count[2]++;
                }else if(input[j] == 'o'){
                    count[3]++;
                }else if(input[j] == 'u'){
                    count[4]++;
                }
            }
            printf("a:%d\ne:%d\ni:%d\no:%d\nu:%d\n", count[0], count[1], count[2], count[3], count[4]);
            if(i != n-1 ){
                printf("\n");} //多个测试实例之间由一个空行隔开。多个测试实例之间由一个空行隔开。
            //请特别注意：最后一块输出后面没有空行：）
        }
    }
    return 0;
}
//38858811    2023-09-01 17:20:54    Accepted    2027    31MS    1688K    1153 B    C    HanRain
