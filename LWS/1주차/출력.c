#include <stdio.h>

int main(void) {
    // 백준 2557 Hello World
    // 출력
    printf("Hello World!");

    // 백준 2741 N 찍기
    // 입력
    int number;
    scanf("%d", &number);
    
    // 출력
    for (int i = 1; i <= number; i++) {
        printf("%d\n", i);
    }

    // 백준 2438 별 찍기 - 1
    // 줄 입력
    int layer;
    scanf("%d", &layer);
    
    // 별 찍기
    for (int i = 0; i < layer; i++) {
        for (int j = 0; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}