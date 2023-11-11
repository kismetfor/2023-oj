

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int n;
    while (scanf("%d", &n) == 1 && n<=100) {
        if(n == 0){break;}
        int start[25];
        int end[25];
        for (int i=0; i<n; i++) {
            scanf("%d %d", &start[i], &end[i]);
        }
        for (int i=0; i<n; i++) {
            for (int j=i+1; j<n; j++) {
                if(end[i] > end[j]){
                    int temp = end[i];
                    end[i] = end[j];
                    end[j] = temp;
                    temp = start[i];
                    start[i] = start[j];
                    start[j] = temp;
                }
            }
        }
        int current_time = 0;
        int count = 0;
        for (int i=0; i<n; i++) {
            if(current_time > start[i]){
                continue;
            }
            current_time = end[i];
            count++;
        }
        printf("%d\n", count);
    }
    return 0;
}
