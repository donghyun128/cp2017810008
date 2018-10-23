#include <stdio.h>
int main() {
	int i = 0, sum = 0;
	for (i = 1; i < 100; i++)
	{
		if (i % 5 == 0)
			sum += i;
	}
	printf("sum is %d", sum);
}