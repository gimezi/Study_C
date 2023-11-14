#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N); // 정수의 개수 입력 받기

    int arr[N]; // N개의 정수를 담을 배열 선언
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]); // N개의 정수 입력 받기
    }

    int v;
    scanf("%d", &v); // 찾으려는 정수 v 입력 받기

    int found = 0; // 찾았는지 여부를 나타내는 변수
    for (int i = 0; i < N; i++) {
        if (arr[i] == v) {
            found += 1;
        }
    }
    printf("%d\n",found);
    return 0;
}