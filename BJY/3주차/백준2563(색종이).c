
# include <stdio.h>
# include <string.h>

int main() {
    int num;
    int ans = 0;
    int x,y;
    int square[100][100] = {0,};
    scanf("%d", &num);

    for (int i=0; i< num; i++) {
        scanf("%d %d", &x, &y);
        for (int k = x; k < x + 10; k++) {
            for (int j = y; j < y + 10; j++) {
                square[k][j] = 1;
            }
        }
    }

    for (int i=0;i<100;i++) {
        for (int j=0;j<100;j++){
            if (square[i][j] == 1) {
                ans++;
            }
        }
    }
	printf("%d\n", ans);
}