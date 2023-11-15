// 백준 11021 A + B - 7
#include <stdio.h>

int main(void) {
    // 입력
    int T, A, B;
    scanf("%d", &T);

    // A + B 형식에 맞춰 출력
    for (int tc = 0; tc < T; tc++) {
        scanf("%d %d", &A, &B);
        printf("Case #%d: %d\n", tc + 1, A + B);
    }

    return 0;
}