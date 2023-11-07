#include <stdio.h>

int main(void) {
    // 백준 10950 A + B - 3
    // 입력
    int T, A, B;
    scanf("%d", &T);
    
    // 합 출력
    for (int i = 0; i < T; i++) {
        scanf("%d %d", &A, &B);
        printf("%d\n", A + B);
    }

    // 백준 10951 A + B - 4
    // 입력
    int A, B;

    // 합 출력
    while (scanf("%d %d", &A, &B) != EOF) {
        printf("%d\n", A + B);
    }
    
    // 백준 10952 A + B - 5
    // 입력
    int A, B;
    
    // 합 출력
    while (true) {
        scanf("%d %d", &A, &B);
        
        if (A == 0 && B == 0) {
            break;
        } else {
            printf("%d\n", A + B);
        }

    return 0;
    }
}