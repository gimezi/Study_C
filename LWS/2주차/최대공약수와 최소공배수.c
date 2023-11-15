// 백준 2609 최대공약수와 최소공배수
#include <stdio.h>

int main(void) {
    // 입력
    int A, B, GCD, LCM, max, min, x;

    scanf("%d %d", &A, &B);

    // 큰 수와 작은 수 확인 및 같을 경우 처리
    if (A > B) {
        max = A;
        min = B;
    }
    else if (B > A) {
        max = B;
        min = A;
    }
    else {
        printf("%d\n", A);
        printf("%d\n", B);
        exit(0);
    }

    // 최대공약수 계산
    GCD = min + 1;
    while (1) {
        GCD--;

        if (min % GCD != 0) {
            continue;
        }

        if (max % GCD == 0) {
            break;
        }
    }

    // 최소공배수 계산
    LCM = max;
    while (1) {
        if (LCM % min == 0) {
            break;
        }

        LCM += max;
    }

    // 최대공약수와 최소공배수 출력
    printf("%d\n", GCD);
    printf("%d\n", LCM);

    return 0;
}