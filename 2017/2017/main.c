//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int n;
    scanf("%d",&n);
    char input[1000]; //得到的字符串
    for(int i = 0; i<n; i++){ //输入
        scanf("%s",input);
        int count = 0; //统计字符串
        //遍历字符串
        for(int j =0; input[j] != '\0'; j++){
            if(input[j] >= '0' && input[j] <= '9'){
                count++;
            }
        }
        printf("%d\n",count);
    }
    return 0;
}
///38835399    2023-08-26 21:25:22    Accepted    2017    15MS    1696K    454 B    C    HanRain
