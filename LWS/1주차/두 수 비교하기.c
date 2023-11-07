// 백준 1330 두 수 비교하기.
#include <stdio.h>

int main(void) {
    // 입력
    int A, B;
    scanf("%d %d", &A, &B);
    
    // 두 수 비교하기
    if (A > B) {
        printf(">");
    } else if (A < B) {
        printf("<");
    } else {
        printf("==");
    }
    
    return 0;
}