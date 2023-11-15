// 백준 2480 주사위 세개
#include <stdio.h>

int main(void) {
    // 입력
    int A, B, C;
    scanf("%d %d %d", &A, &B, &C);

    // 조건에 따른 결과 출력
    if (A == B) {
        if (B == C) {
            printf("%d", 10000 + A * 1000);
        }
        else {
            printf("%d", 1000 + A * 100);
        }
    }
    else {
        if (B == C) {
            printf("%d", 1000 + B * 100);
        }
        else if (A == C) {
            printf("%d", 1000 + A * 100);
        }
        else {
            if (A > B) {
                if (A > C) {
                    printf("%d", A * 100);
                }
                else {
                    printf("%d", C * 100);
                }
            }
            else {
                if (B > C) {
                    printf("%d", B * 100);
                }
                else {
                    printf("%d", C * 100);
                }
            }
        }
    }

    return 0;
}