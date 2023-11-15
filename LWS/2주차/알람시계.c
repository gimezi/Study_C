// 백준 2884 알람 시계
#include <stdio.h>

int main(void) {
    // 입력
    int H, M;
    scanf("%d %d", &H, &M);

    // 시간 계산 및 출력
    if (M - 45 < 0) {
        if (H == 0) {
            printf("23 %d", M + 15);
        }
        else {
            printf("%d %d", H - 1, M + 15);
        }
    }
    else {
        printf("%d %d", H, M - 45);
    }

    return 0;
}
