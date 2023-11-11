//
//  main.c
//  2042
//
//  Created by rain on 2023/9/20.
//

#include <stdio.h>
int count(int a){
    int num = 3;
    for (int i=0; i<a; i++) {
        num = (num-1)*2;
    }
    return num;
}
int main(int argc, const char * argv[]) {
    int n;
    scanf("%d", &n);
    for (int i=0; i<n; i++) {
        int a;
        while (scanf("%d", &a) == 1 && a>0 && a<=40) {
            int num = count(a);
            printf("%d\n", num);
        }
    }
    return 0;
}
