#include <stdio.h>

int main() {

	int arr[9];
	scanf("%d", &arr[0]);
	int max = arr[0];
	int maxidx = 0;

	for (int i = 1; i < 9; i++) {
		scanf("%d", &arr[i]);
		if (arr[i] > max) {
			max = arr[i];
			maxidx = i;
		}
	}
	printf("%d\n", max);
	printf("%d", maxidx + 1);

	return 0;
}