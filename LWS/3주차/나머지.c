// 백준 3052 나머지
#include <stdio.h>

int main(void) {
    int remainders[42] = {0};
    int count = 0;
    
    for (int index = 0;index < 10;index++) {
        int number;
        scanf("%d", &number);
        
        if (remainders[number % 42] == 0) {
            count++;
            remainders[number % 42] = 1;
        }
    }
    
    printf("%d", count);
    
    return 0;
}
