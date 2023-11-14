#include <stdio.h>

int main() {
    int N, X;
    scanf("%d %d", &N, &X); // 정수의 개수 N과 X 입력 받기

    int arr[N]; // N개의 정수를 담을 배열 선언
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]); // N개의 정수 입력 받기
    }

    // X보다 작은 수 출력
    for (int i = 0; i < N; i++) {
        if (arr[i] < X) {
            printf("%d ", arr[i]); // X보다 작은 수 출력
        }
    }
    printf("\n"); // 출력 줄 바꿈

    return 0;
}