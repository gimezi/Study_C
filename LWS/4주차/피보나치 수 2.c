// 백준 2748 피보나치 수 2
#include <stdio.h>

int main(void) {
    int n;
    scanf("%d", &n);
    
    long long fibonacci[91];
    long long * p = fibonacci;
    
    *p = 0;
    p++;
    *p = 1;
    p++;
    
    for (int i = 2;i <= n;i++) {
        *p = *(p - 1) + *(p - 2);
        p++;
    }

    printf("%lld", fibonacci[n]);

    return 0;
}
