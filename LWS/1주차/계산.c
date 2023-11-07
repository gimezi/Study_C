#include <stdio.h>

int main(void) {
    // 입력
    int A, B;
    scanf("%d %d", &A, &B);
    
	// 출력
    printf("%d\n", A + B);
    printf("%d\n", A - B);
    printf("%d\n", A * B);
    printf("%d\n", A / B);
    printf("%d\n", A % B);
    
    return 0;
}