#include <stdio.h>
int main() {
	int i = 0, sum;
	for (i = 1; i < 100; i++)
		sum += i;

	printf("sum is %d\n", sum);
}