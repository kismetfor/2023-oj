#include <stdio.h>
#include <stdlib.h>
int main(){
    int m, n;
    while(scanf("%d %d", &m, &n) == 2){
        int maxScore = 0; //初始值初始化为负无穷大
        int maxX = 0;
        int maxY = 0;
        for(int i = 1; i <= m; i++){
            for(int j = 1; j <= n; j++){ //m行n列
                int score; //录入一个用一个判断一个
                scanf("%d", &score);
                if(abs(maxScore) < abs(score) ||((abs(maxScore) == abs(score) && (i < maxX)) || (i == maxX && j < maxY))){
                    maxScore = score;
                    maxX = i;
                    maxY = j;
                }
            }
            
        }
        printf("%d %d %d", maxX, maxY, maxScore);
    }
    return 0;
}
