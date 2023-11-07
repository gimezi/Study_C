// 백준 2575 검증수
#include <stdio.h>

int main(void) {
    // 입력값 제곱 해서 더하기
    int number, verification = 0;

    for (int index = 0; index < 5; index++) {
        scanf("%d", &number);
        verification += number * number;
    }

    // 10으로 나눈 나머지 출력
    verification %= 10;

    printf("%d", verification);

    return 0;
}