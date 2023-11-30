#include <stdio.h>

int main() {
	int train = 0;
	int maxp = 0;
	for (int i = 0; i < 4; ++i) {
		int in, out;
		scanf("%d %d", &out, &in);
		train -= out;
		train += in;
		if (train > maxp) {
			maxp = train;
		}
	}
	printf("%d", maxp);
}