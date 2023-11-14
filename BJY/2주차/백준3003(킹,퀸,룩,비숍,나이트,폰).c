#include <stdio.h>

int main() {
    int white[6]; // 흰색 피스 배열: 킹, 퀸, 룩, 비숍, 나이트, 폰
    int correct[6] = {1, 1, 2, 2, 2, 8}; // 올바른 흰색 피스 개수
    int diff[6]; // 차이를 저장할 배열

    // 흰색 피스 개수 입력
    for (int i = 0; i < 6; ++i) {
        scanf("%d", &white[i]);
    }

    // 차이 계산
    for (int i = 0; i < 6; ++i) {
        diff[i] = correct[i] - white[i];
    }

    // 결과 출력
    for (int i = 0; i < 6; ++i) {
        printf("%d ", diff[i]);
    }
    printf("\n");
    return 0;
}