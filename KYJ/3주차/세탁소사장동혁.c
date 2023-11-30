#include <stdio.h>

int main() {
	int T;
	scanf("%d", &T);
	for (int i = 0; i < T; ++i) {
		int money;
		scanf("%d", &money);
		int q, d, n, p;
		q = money / 25;
		money -= q * 25;
		d = money / 10;
		money -= d * 10;
		n = money / 5;
		money -= n * 5;
		p = money;
		printf("%d %d %d %d\n", q, d, n, p);
	}
}