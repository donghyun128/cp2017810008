#include <stdio.h>
int main() {
	int i, n, sum = 0;
	printf("���ڸ� �Է��Ͻÿ�.\n");
	scanf_s("%d", &n);
	for (i = 7; i <= n; i++)
		sum += i;
	printf("sum : %d\n", sum);
}