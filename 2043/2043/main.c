//
//  main.c
//  2043
//
//  Created by rain on 2023/9/20.
//

#include <stdio.h>
#include <ctype.h>
#include <string.h>
int is_secure_password(char *password){
    int length = strlen(password);
    if(length < 8 || length >16){
        return 0;
    }
    int categories[4] = {0};
    for (int i=0; i<length; i++) {
        char c = password[i];
        if(isupper(c)){
            categories[0] = 1;
        }
        else if(islower(c)){
            categories[1] = 1;
        }
        else if(isdigit(c)){
            categories[2] = 1;
        }
        else if (strchr("~!@#$%^", c) != NULL){
            categories[3] = 1;
        }
        else{
            return 0; //非法字符
        }
    }
    int flag = 0;
    for (int i=0; i<4; i++) {
        flag += categories[i];
    }
    return flag >= 3;
}
int main(int argc, const char * argv[]) {
    int M;
    scanf("%d", &M);
    getchar();
    while (M--) {
        char password[51];
        fgets(password, sizeof(password), stdin);
        if(password[strlen(password)-1] == '\n'){
            password[strlen(password)-1] = '\0';
        }
        if(is_secure_password(password)){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }
    return 0;
}
