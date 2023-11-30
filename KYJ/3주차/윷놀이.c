#include <stdio.h>

int main() {
	for (int i = 0; i < 3; ++i) {
		int a, b, c, d;
		scanf("%d %d %d %d", &a, &b, &c, &d);
		int ans = a + b + c + d;
		if (ans == 0) {
			printf("D\n");
		}
		else if (ans == 1) {
			printf("C\n");
		}
		else if (ans == 2) {
			printf("B\n");
		}
		else if (ans == 3) {
			printf("A\n");
		}
		else if (ans == 4) {
			printf("E\n");
		}
	}
}