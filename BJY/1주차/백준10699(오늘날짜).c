#include <stdio.h>

int main(void)

{
    int year = 2023;
    int month = 11;
    // 처음에 int day = 07 후 ,출력 하면 7로 출력됨
    int day = 7;
    // 07과 같은 숫자는 8진수로 해석한다. 따라서 10진수로는 7이 출력됨
    // 따라서 이를 해결하기 위해 10진수 출력법을 사용
    // %02d와 같이 포맷 지정자를 이용해서 두자리 출력
    printf("%d-%02d-%02d\n",year,month,day);
    return 0;
}