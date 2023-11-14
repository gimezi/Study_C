#include <stdio.h>
#include <math.h>

int main(void) {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    if (a == b && b == c) {
        int result = a * 1000 + 10000;
        printf("%d\n", result);
    }
    else if ( a != b && b != c && a != c ) {
        int result = (int)fmax(a,fmax(b,c)) * 100;
        printf("%d\n", result);
    }
    else {
        if ( a == b || a == c) {
            int result = 1000 + a * 100;
            printf("%d\n",result);
        }
        else {
            int result = 1000 + b * 100;
            printf("%d\n", result);
        }
    }
    return 0;
}