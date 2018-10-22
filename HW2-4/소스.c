#include <stdio.h>
int main() {
	int num = 1, sum = 0;
	for (num = 1; num <= 100; num++;)
	{
		if (num % 3 == 0)
			sum += num;
	}
	printf("sum is %d", sum);
}