// 백준 10807 개수 세기
#include <stdio.h>

int main(void) {
    int N, v;
    int numbers[101];
    int count = 0;
    
    scanf("%d", &N);
    
    for (int index = 0;index < N;index++) {
        scanf("%d", &numbers[index]);
    }
    
    scanf("%d", &v);
    
    for (int index = 0;index < N;index++) {
        if (numbers[index] == v) {
            count++;
        }
    }
    
    printf("%d", count);
    
    return 0;
}
