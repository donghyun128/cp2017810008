#include <stdio.h>
int main() {
	int num = 1, sum = 0;
	while (num <= 100)
	{
		if (num % 3 == 0)
			sum += num;
		num++;
	}
	printf("sum is %d\n", sum);
}