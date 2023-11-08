#include <stdio.h>

int main(void) {
    // 백준 10869 사칙연산
    int A, B;
    scanf("%d %d", &A, &B);

    printf("%d\n", A + B);
    printf("%d\n", A - B);
    printf("%d\n", A * B);
    printf("%d\n", A / B);
    printf("%d\n", A % B);

    // 백준 1008 A / B
    // 입력
    double A, B;
    scanf("%lf %lf", &A, &B);

    // 출력
    double result = A / B;
    printf("%.10lf", result);

    return 0;
}
