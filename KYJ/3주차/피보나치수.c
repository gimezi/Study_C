#include <stdio.h>

int main() {
	int n;
    scanf("%d", &n);
    int fibo[45] = {0};
    fibo[1] = 1;
    fibo[2] = 1;
    int k = 3;
    while (k <= n) {
        fibo[k] = fibo[k - 1] + fibo[k - 2];
        k += 1;
    }
    printf("%d", fibo[n]);
}