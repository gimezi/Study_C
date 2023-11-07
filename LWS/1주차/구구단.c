// 백준 2739 구구단
#include <stdio.h>

int main(void) {
    // 입력
    int time_table;
    scanf("%d", &time_table);
    
    // 구구단 출력
    for (int i = 1; i <= 9; i++) {
        printf("%d * %d = %d\n", time_table, i, time_table * i);
    }
    
    return 0;
}