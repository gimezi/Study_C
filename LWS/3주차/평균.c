// 백준 1546 평균
#include <stdio.h>

int main(void) {
	int N;
    scanf("%d", &N);
    
    int scores[1001];
    int sum = 0;
    int max = 0;
    for (int index = 0;index < N;index++) {
        scanf("%d", &scores[index]);
        sum += scores[index];
        
        if (max < scores[index]) {
            max = scores[index];
        }
    }
    
    printf("%f", (float)sum / N / max * 100.0);
    
	return 0;
}
