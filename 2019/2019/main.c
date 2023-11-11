
#include <stdio.h>

int main(int argc, const char * argv[]) {
    int m, n;
    while(scanf("%d %d", &n, &m) == 2 && n<=100){
        if(m==0 && n ==0){
            break;
        }
        int array[105];
        for(int i = 0; i<n; i++){ //得到输入
            scanf("%d",&array[i]);
        }
        //寻找插入位置
        int pos = 0;
        while (pos<n && array[pos]<m) {
            pos++;
        }
        
        //插入元素并后移
            for (int j=n; j>pos; j--) {
                array[j] = array[j-1]; //往后移
            }
            array[pos] = m;

        //输出
        for (int i = 0; i<n+1; i++) {
            printf("%d ",array[i]);
        }
    }
    
    return 0;
}
