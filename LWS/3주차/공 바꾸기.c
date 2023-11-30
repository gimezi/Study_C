// 백준 10813 공 바꾸기
#include <stdio.h>

int main(void) {
    int N, M;
    int basket[102] = {0};
    
    scanf("%d %d", &N, &M);
    
    for (int m = 0;m < M;m++) {
        int i, j;
        scanf("%d %d", &i, &j);
        
        int former_i, former_j;
        
        if (basket[i] == 0) {
            former_i = i;
        } else {
            former_i = basket[i];
        }
        
        if (basket[j] == 0) {
            former_j = j;
        } else {
            former_j = basket[j];
        }
        
        basket[i] = former_j;
        basket[j] = former_i;
    }
    
    for (int n = 1;n <= N;n++) {
        if (basket[n] == 0) {
            printf("%d ", n);
        } else {
            printf("%d ", basket[n]);
        }
    }
    
    return 0;
}
