#include <stdio.h>

int main() {
    int N;
    scanf("%d",&N);
    double arr[N];
    double mn = 0;
    float avg = 0;
    for (int i = 0; i< N; i++) { 
        scanf("%lf", &arr[i]);
        if ( mn < arr[i] ){
            mn = arr[i];
        }
    }
    
    for (int i = 0; i < N; i++) {
        avg += arr[i] / mn * 100;
    }

    printf("%f\n", avg / N);
    return 0;
}