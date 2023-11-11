#include <stdio.h>

unsigned int count_planes(int n){
    unsigned int plane[10000];
    plane[1] = 2;
    plane[2] = 7;
    plane[3] = 16;
    for (int i=4; i<=n; i++) {
        plane[i] = plane[i-1] + 4*(i-1) + 1;
    }
    return plane[n];
}
int main(){
    int C;
    scanf("%d", &C);
    while (C--) {
        int n;
        scanf("%d", &n);
        unsigned int s = count_planes(n);
        printf("%d\n", s);
    }
}
