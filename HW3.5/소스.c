#include <stdio.h>
int MultiplyTable(int num)
{
	for (int i = 1; i <= num; i++)
	{
		for (int j = 1; j <= 9; j++)
			printf("%d * %d = %d\t", i, j, i*j);
		putchar('\n');
	}
	return 0;
}

int main() {
	int num= 0 ;
	printf("숫자를 입력하라.\t");
	scanf_s("%d", &num);
	MultiplyTable(num);
	return 0;
}