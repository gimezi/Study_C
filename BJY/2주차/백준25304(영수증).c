#include <stdio.h>

int main() {

    int X;
    scanf("%d",&X);
    int N;
    scanf("%d",&N);
    int sum = 0;

    for (int i = 0; i < N; i++) {
        int a, b;
        scanf("%d %d",&a,&b);
        sum += a * b ; 
    }
    if ( sum == X) {

        printf("Yes\n");
    }
    else {
        printf("No\n");
    }
    return 0;
}