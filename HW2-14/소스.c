#include <stdio.h>
int main() {
	int i, n, sum = 0;
	printf("숫자를 입력하시오.\n");
	scanf_s("%d", &n);
	for (i = 7; i <= n; i++)
		sum += i;
	printf("sum : %d\n", sum);
}