#include <stdio.h>
#include <stdlib.h> //包含abs与qsort函数
int compare(const void *a, const void *b){
    int absA = abs(*(int *)a);
    int absB = abs(*(int *)b);
    if(absA<absB){
        return 1;
    }
    else if(absA == absB){
        return 0;
    }
    else
        return -1;
}

int main(){
    int n; //数据个数
    while (scanf("%d",&n) == 1 && n<=100) {
        if(n == 0){
            break;
        }
        //获取输入
        int array[100];
        for(int i = 0; i<n; i++){
            scanf("%d",&array[i]);
        }
        //使用qsort排序
        qsort(array, n, sizeof(int), compare);
        //输出
        for(int i=0; i<n; i++){
            printf("%d ",array[i]);
        }
    }
    
    return 0;
}
