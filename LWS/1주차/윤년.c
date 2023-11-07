// 백준 2753 윤년
#include <stdio.h>

int main(void) {
    // 입력
    int year;
    scanf("%d", &year);
    
    // 윤년 여부 확인 및 출력
    if (year % 4 != 0) {
        printf("0");
    } else if (year % 100 == 0) {
        if (year % 400 == 0) {
            printf("1");
        } else {
            printf("0");
        }
    } else {
        printf("1");
    }
}