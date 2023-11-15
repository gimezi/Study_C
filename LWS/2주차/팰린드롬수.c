// 백준 1259 팰린드롬수
#include <stdio.h>

int main(void) {
    int N, n, palindrome;

    // 팰린드롬수 여부 확인 및 출력
    while (1) {
        scanf("%d", &N);

        if (N == 0) {
            break;
        }

        n = N;
        palindrome = 0;

        while (n) {
            palindrome = palindrome * 10 + n % 10;
            n /= 10;
        }

        if (N == palindrome) {
            printf("yes\n");
        }
        else {
            printf("no\n");
        }
    }
    return 0;
}