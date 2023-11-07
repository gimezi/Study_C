// 백준 10871 X 보다 작은 수
#include <stdio.h>

int main(void) {
    // 입력
    int N, X, A;
    scanf("%d %d", &N, &X);
    
    for (int i = 0; i < N; i++) {
        scanf("%d", &A);
        
        // X 보다 작은 수 출력
        if (A < X) {
            printf("%d ", A);
        }
    }
    
    return 0;
}