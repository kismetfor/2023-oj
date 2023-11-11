
#include <stdio.h>
int main(int argc, const char * argv[]) {
    int m;
    int n;
    while(scanf("%d %d",&n, &m) == 2 && n<=100){
        int array[1000] = {0}; //不初始化会随机赋值
        for (int i=0; i<n; i++) {
            array[i] += 2 + 2*i; //给偶数数组赋值
        }
        for(int i=0; i<n; i+=m){
            int sum=0;
            int count=0;
            for (int j = i; j<i+m && j<n; j++) {
                count++;
                sum += array[j]; //每一组的和已经得到了,拿到外层循环求ave
            }
            int average;
            average = sum / count;
            printf("%d ",average);
        }
    }
    return 0;
}
//轻松拿下 38834955    2023-08-26 19:33:19    Accepted    2015    15MS    1696K    649 B    C    HanRain
