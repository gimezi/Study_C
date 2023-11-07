// 백준 9498 시험 성적
#include <stdio.h>

int main(void) {
    // 입력
    int score;
    scanf("%d", &score);
    
    // 성적 출력
    if (score >= 90 && score <= 100) {
        printf("A");
    } else if (score >= 80) {
        printf("B");
    } else if (score >= 70) {
        printf("C");
    } else if (score >= 60) {
        printf("D");
    } else {
        printf("F");
    }
    
    return 0;
}