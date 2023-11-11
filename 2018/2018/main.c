#include<stdio.h>
int countCow(int n){ //n是年份
    if(n<=4){
        return n;
    }
    else{
//        return countCow(n-1)+n-3;
        return countCow(n-1)+countCow(n-3);
    }
}
int main(){
    int n;
    while (scanf("%d",&n) == 1 && n>0 && n <55) {
        if(n==0){
            break;
        }
        int num;
        num = countCow(n);
        printf("%d\n",num);
    }
    return 0;
}
