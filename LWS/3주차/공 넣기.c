// 백준 10810 공 넣기
#include <stdio.h>

int main(void) {
    int N, M;
    int basket[102] = {0};
    
    scanf("%d %d", &N, &M);
    
    for (int m = 0;m < M;m++) {
        int i, j, k;
        
        scanf("%d %d %d", &i, &j, &k);
        
        for (int index = i;index <= j;index++) {
            basket[index] = k;
        }
    }
    
    for (int n = 1;n <= N;n++) {
        printf("%d ", basket[n]);
    }
    
    return 0;
}
