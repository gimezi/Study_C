#include <stdio.h>

int main(void) {
    // 입력
    int A, B, V, day;
    scanf("%d %d %d", &A, &B, &V);

    // 날짜 계산 및 출력
    day = (V - A) / (A - B);

    if (V - A > (day * (A - B))) {
        day++;
    }
   
    printf("%d", day + 1);

    return 0;
}