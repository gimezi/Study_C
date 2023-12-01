// 문제

// LCS(Longest Common Subsequence, 최장 공통 부분 수열)문제는 두 수열이 주어졌을 때, 모두의 부분 수열이 되는 수열 중 가장 긴 것을 찾는 문제이다.

// 예를 들어, ACAYKP와 CAPCAK의 LCS는 ACAK가 된다.
// 입력

// 첫째 줄과 둘째 줄에 두 문자열이 주어진다. 문자열은 알파벳 대문자로만 이루어져 있으며, 최대 1000글자로 이루어져 있다.
// 출력

// 첫째 줄에 입력으로 주어진 두 문자열의 LCS의 길이를 출력한다.


#include<stdio.h>
#include<string.h>

int max(int a, int b) { return (a > b) ? a : b; }

int main() {
    char s1[1001], s2[1001];
    scanf("%s", &s1);
    scanf("%s", &s2);
    int dp[1002][1002] = { 0, };
    for (int i = 1; i <= strlen(s2); i++) {
        for (int j = 1; j <= strlen(s1); j++) {
            if (s2[i-1] == s1[j-1]) {
                dp[i][j] = dp[i-1][j-1]+1;
            }
            else {
                dp[i][j] = max(dp[i][j - 1], dp[i - 1][j]);
            }
        }
    }
    printf("%d", dp[strlen(s2)][strlen(s1)]);
    return 0;
}