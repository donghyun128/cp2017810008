#include <stdio.h>
int main() {
	int num = 1, sum = 0;
	do
	{
		if (num % 3 == 0)
			sum += num;
		num++;
	} while (num <= 100);
	printf("sum is %d\n", sum);
}