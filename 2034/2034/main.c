
#include <stdio.h>

int main(int argc, const char * argv[]) {
    int n, m;
    while (scanf("%d %d", &n, &m) == 2 && n>=0 && n<=100 && m>=0 && m<=100) {
        
        if(n==0 && m==0){
            break;
        }
        int a[101] = {0};
        int b[101] = {0};
        //获取输入
        for (int i=0; i<n; i++) {
            int element;
            scanf("%d", &element);
            a[element] = 1; //标记元素element存在于集合A中
        }
        for (int i=0; i<m; i++) {
            int element;
            scanf("%d", &element);
            b[element] = 1;
        }
        
        //执行A-B
        int flag = 0; //判空
        for (int i=0; i<101; i++) {
            if(a[i] && !b[i]){
                printf("%d ",i);
                flag = 1;
            }
        }
        if(flag == 0){
            printf("NULL\n");
        }else{
            printf("\n");
        }
    }
    return 0;
}
