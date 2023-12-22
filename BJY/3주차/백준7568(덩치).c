#include <stdio.h>

int main()
{
    int N, k = 0;
    scanf("%d",&N);
    // N이 50 이하이기 때문에 배열의 길이를 둘다 50으로 설정
    int x[50];
    int y[50];

    for (int i = 0; i < N; i++)
        scanf("%d %d", &x[i],&y[i]);

    for (int i = 0; i < N; i++) {
    // for문 돌때마다 k=0 초기화
        k = 0;
        for (int j = 0; j < N; j++) {
            if(x[i]< x[j] && y[i] < y[j])
                k++;
        }
        printf("%d ", k+1);
    }
    return 0;
}