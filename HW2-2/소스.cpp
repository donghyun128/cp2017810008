#include <stdio.h>
int main() {
	int i = 1, sum = 0,num;
	while (i <= 10)
	{
		scanf_s("%d", &num);
		sum += num;
		i++;
	}
	printf("sum of numbers : %d\n", sum);
	

}