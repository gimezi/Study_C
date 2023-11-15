// 백준 2525 오븐 시계
#include <stdio.h>

int main(void) {
    // 입력
    int A, B, C, D, E;
    scanf("%d %d", &A, &B);
    scanf("%d", &C);

    // 시간 계산 및 출력
    D = C / 60;
    E = C % 60;

    if (B + E >= 60) {
        if (A + D >= 23) {
            printf("%d %d", A + D - 23, B + E - 60);
        }
        else {
            printf("%d %d", A + D + 1, B + E - 60);
        }
    }
    else {
        if (A + D >= 24) {
            printf("%d %d", A + D - 24, B + E);
        }
        else {
            printf("%d %d", A + D, B + E);
        }
    }

    return 0;
}