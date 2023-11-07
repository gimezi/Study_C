#include <stdio.h>

int main(void)

{
    int a;
    scanf("%d", &a);

    // for문 사용법 
    // for (초기화식; 조건식; 증감식) {실행코드}
    int start = 1;
    for (int start = 1; start <= 9; start++) {
        printf("%d * %d = %d\n", a,start,a*start);
    }
    return 0;
}