#include <stdio.h>

int main(void)
{
    int a;
    scanf("%d", &a);
    
    int b;
    scanf("%d", &b);
    // 논리 연산자 %% 사용: 둘다 참일때만 true를 리턴한다.  
    if (a > 0 && b > 0)
        printf("1\n");
    if (a > 0 && b < 0)
        printf("4\n");
    if (a < 0 && b > 0)
        printf("2\n");
    if (a < 0 && b < 0)
        printf("3\n");

    return 0;
}