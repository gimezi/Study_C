#include <stdio.h>

int main() {
	int pc[100] = {0};
    int n;
    int reject = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; ++i){
        int per;
        scanf("%d", &per);
        if (pc[per] == 1) {
            reject += 1;
        } else {
            pc[per] = 1;
        }
    }
    printf("%d", reject);
}