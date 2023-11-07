#include <stdio.h>

int main(void)

{
    // (-2,000,000,000 ≤ N, M ≤ 2,000,000,000)
    // int의 범위는 -32768 ~ +32767이다.
    // 넘어가면 비정상적인 출력을 한다.
    // 따라서 longlong 데이터 형식 사용
    // %lld
    long long N, M;
    scanf("%lld%lld", &N,&M);

    long long diff = N - M;

    if (diff < 0)
        printf("%lld\n", -diff);
    else
        printf("%lld\n", diff);

    return 0;
}