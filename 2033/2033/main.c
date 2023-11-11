#include <stdio.h>

int main(int argc, const char * argv[]) {
    int n;
    while(scanf("%d", &n) == 1){
        for(int i=0; i<n; i++){
            int AH, AM, AS, BH, BM, BS;
            scanf("%d %d %d %d %d %d ", &AH, &AM, &AS, &BH, &BM, &BS);
            //获取输入
            int h = AH + BH;
            int m = AM + BM;
            int s = AS + BS;
            if(s>59){
                m++;
                s -= 60;
            }
            if(m>59){
                h++;
                m -= 60;
            }
            printf("%d %d %d\n", h, m, s);
        }
    }
    return 0;
}
//38874801    2023-09-04 23:51:44    Accepted    2033    15MS    1696K    598 B    C    HanRain 果然生气的时候写的都是一遍过 化悲愤为力量
