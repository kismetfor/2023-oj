//
//  main.c
//  2040
//
//  Created by rain on 2023/9/19.
//

#include <stdio.h>

int getSum(int num){
    int sum = 1;
    for (int i = 2; i * i <= num; i++) {
        if(num%i == 0){
            sum += i;
            if(i != num/i){
                sum += num/i;
            }
        }
        
    }
    return sum;
}
int main(int argc, const char * argv[]) {
    int n;
        scanf("%d", &n);
        for (int i=0; i<n; i++) {
            int a, b;
            scanf("%d %d", &a, &b);
            int suma = getSum(a);
            int sumb = getSum(b);
            if(a == sumb && b == suma){
                printf("YES\n");
            }
            else{
                printf("NO\n");
            }
        }
    
    return 0;
}
