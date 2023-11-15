// 백준 2231 분해합
#include <stdio.h>

int main(void) {
    // 입력
    int N, n, m, digit, min, generator, sum, is_generator;

    is_generator = 0;

    scanf("%d", &N);

    // 주어진 수의 자리수 계산
    n = N;
    digit = 0;
    do {
        digit++;
        n /= 10;
    } while (n);

    min = N - digit * 9;
    n = N;

    // 가능한 범위에서 생성자 여부 확인
    while (n >= min) {
        sum = n;
        m = n;

        while (m) {
            sum += m % 10;
            m /= 10;
        }

        if (sum == N) {
            is_generator = 1;
            generator = n;
        }

        n--;
    }

    // 생성자 여부에 따른 출력
    if (is_generator) {
        printf("%d", generator);
    }
    else {
        printf("0");
    }

    return 0;
}
