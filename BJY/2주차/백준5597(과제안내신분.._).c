
#include <stdio.h>

int main() {
    int num[31] = {0};
    int student;

    for (int i=0;i< 28; i++) {
        scanf("%d", &student);
        num[student] = 1;
    }
    for (int i =1; i <= 30; i++) {
        if (num[i] == 0) {
            printf("%d\n", i);
        }
    }
    return 0;
}