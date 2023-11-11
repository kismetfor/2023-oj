
#include <stdio.h>
#include <ctype.h>
int main(int argc, const char * argv[]) {
    char input[101] = {0};
    while(fgets(input, sizeof(input), stdin)){
        for(int i = 0; input[i] != '\0'; i++){
            if(i == 0 || input[i-1] == ' ' && islower(input[i]) ){
                input[i] = toupper(input[i]);
            }
                printf("%c", input[i]);
        }
    }
    return 0;
}
//38857451    2023-09-01 10:57:04    Accepted    2026    15MS    1688K    401 B    C    HanRain
