// 백준 4153 직각삼각형
#include <stdio.h>

int main(void) {
    int a, b, c;

    // 가장 긴 변 확인 후
    // 피타고라스 정리 만족하는지 확인 및 출력
    while (1) {
        scanf("%d %d %d", &a, &b, &c);
        if (a == 0 && b == 0 && c == 0) {
            break;
        }

        if (a > b && a > c) {
            if (b * b + c * c == a * a) {
                printf("right\n");
            }
            else {
                printf("wrong\n");
            }
        }

        if (b > c && b > a) {
            if (c * c + a * a == b * b) {
                printf("right\n");
            }
            else {
                printf("wrong\n");
            }
        }

        if (c > a && c > b) {
            if (a * a + b * b == c * c) {
                printf("right\n");
            }
            else {
                printf("wrong\n");
            }
        }
    }

    return 0;
}