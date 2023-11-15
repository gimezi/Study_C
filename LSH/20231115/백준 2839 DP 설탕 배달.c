
// 문제

// 상근이는 요즘 설탕공장에서 설탕을 배달하고 있다. 상근이는 지금 사탕가게에 설탕을 정확하게 N킬로그램을 배달해야 한다. 설탕공장에서 만드는 설탕은 봉지에 담겨져 있다. 봉지는 3킬로그램 봉지와 5킬로그램 봉지가 있다.

// 상근이는 귀찮기 때문에, 최대한 적은 봉지를 들고 가려고 한다. 예를 들어, 18킬로그램 설탕을 배달해야 할 때, 3킬로그램 봉지 6개를 가져가도 되지만, 5킬로그램 3개와 3킬로그램 1개를 배달하면, 더 적은 개수의 봉지를 배달할 수 있다.

// 상근이가 설탕을 정확하게 N킬로그램 배달해야 할 때, 봉지 몇 개를 가져가면 되는지 그 수를 구하는 프로그램을 작성하시오.
// 입력

// 첫째 줄에 N이 주어진다. (3 ≤ N ≤ 5000)
// 출력

// 상근이가 배달하는 봉지의 최소 개수를 출력한다. 만약, 정확하게 N킬로그램을 만들 수 없다면 -1을 출력한다.

#include <stdio.h>
#include <limits.h>

int dp[5001];

int DP(int N) {
    if (N < 0) {
        return INT_MAX;
    }
    if (dp[N] != INT_MAX) {
        return dp[N];
    }
    int count3 = DP(N - 3);
    int count5 = DP(N - 5);
    if (count3 == INT_MAX && count5 == INT_MAX) {
        return INT_MAX;
    }
    dp[N] = (count3 < count5) ? count3 + 1 : count5 + 1;
    return dp[N];
}

int main() {
    int N;
    scanf("%d", &N);

    // dp 배열을 최댓값으로 초기화
    for (int i = 0; i <= N; i++) {
        dp[i] = INT_MAX;
    }

    // 초기 조건 설정
    dp[0] = 0;
    if (N >= 3) dp[3] = 1;
    if (N >= 5) dp[5] = 1;

    int result = DP(N);

    if (result == INT_MAX) {
        printf("-1\n");
    } else {
        printf("%d\n", result);
    }

    return 0;
}
