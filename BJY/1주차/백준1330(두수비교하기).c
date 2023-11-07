#include <stdio.h>

int main(void)

{
    int A, B;
    
    scanf("%d%d", &A, &B);
    // c 언어에서 if 문을 쓸때 (안에 조건문)을 달고
    // 출력문에만 ;세미콜론을 붙임
    if (A > B)
        printf(">\n");
    else if (A < B)
        printf("<\n");
    else
        printf("==\n");

    return 0;
}