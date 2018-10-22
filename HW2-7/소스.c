#include <stdio.h>
int main() {
	printf("정수를 입력하시오.\n");
	int i = 0, sum = 0;
	while (1)
	{
		
		scanf_s("%d", &i);
		if (i == 0)
			break;
			sum += i;
		continue;
	}
	printf("sum : %d", sum);
}