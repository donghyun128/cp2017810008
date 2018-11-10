#include <stdio.h>
int SumArray(int a, int b) {
	int i = 0, sum=0;
	scanf_s("%d %d", &a, &b);
	for (i = a; i <= b; i++) {
		sum += i;
	}
	printf("Sum : %d\n", sum);
}
int main() {
	int x = 0, y = 0;
	SumArray(x, y);
	return 0;
}