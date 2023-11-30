#include <stdio.h>
#include <math.h>

int main() {
	int d, h, w;
	scanf("%d %d %d",&d,&h, &w);
	double n;
	n = d / sqrt((h * h + w * w));
	int a, b;
	a = n * h;
	b = n * w;
	printf("%d %d\n", a, b);
}