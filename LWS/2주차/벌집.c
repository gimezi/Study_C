// 백준 2292 벌집
#include <stdio.h>

int main(void) {
    // 입력
    int N, rooms, last_number;
    scanf("%d", &N);

    // 거쳐야 하는 방의 개수 계산 및 출력
    rooms = 1;
    last_number = 1;

    while (1) {
        if (N <= last_number) {
            break;
        }
        
        last_number += 6 * rooms;
        
        rooms++;
    }

    printf("%d", rooms);

    return 0;
}