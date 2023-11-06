#include <stdio.h>
#include <stdlib.h>

int main() {
	int a, b, c;
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);

	int mult;
	mult = a * b * c;
	
	int arr[] = {0,0,0,0,0,0,0,0,0,0};
	while (mult >= 1) {
		int re = mult % 10;
		arr[re]++;
		mult /= 10;
	}
	for (int i = 0; i < 10; i++) {
		printf("%d\n", arr[i]);
	}
	return 0;
}