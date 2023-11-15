// 문제

// M이상 N이하의 소수를 모두 출력하는 프로그램을 작성하시오.
// 입력

// 첫째 줄에 자연수 M과 N이 빈 칸을 사이에 두고 주어진다. (1 ≤ M ≤ N ≤ 1,000,000) M이상 N이하의 소수가 하나 이상 있는 입력만 주어진다.
// 출력

// 한 줄에 하나씩, 증가하는 순서대로 소수를 출력한다.

#include <stdio.h>
#include <math.h>

#define MAX 1000001

int main() {
    int M, N;
    scanf("%d %d", &M, &N);

    // 크기가 MAX인 정수 배열 isPrime을 선언하고, 이 배열의 모든 요소를 0으로 초기화, 모든 숫자를 처음에는 소수로 간주
    int isPrime[MAX] = {0};

    // 0과 1은 소수가 아님
    isPrime[0] = isPrime[1] = 1;

    // 에라토스테네스의 체 
    for (int i = 2; i <= sqrt(MAX); i++) {
        if (isPrime[i] == 0) {                      // i가 소수이면
            for (int j = 2; i * j < MAX; j++) {     // 자신을 제외한 i의 배수 제거
                isPrime[i * j] = 1;
            }
        }
    }

    for (int i = M; i <= N; i++) {
        if (isPrime[i] == 0) printf("%d\n", i);
    }

    return 0;
}
