#include <stdio.h>
int main() {
	int i,j,n;
	printf("���� �Է��Ͻÿ�.\n");
	scanf_s("%d", &n);
	for (i = 0; i <= n; i++)
	{
		for (j = 0; j < 2 * i - 1; j++)
			printf("*");
		for (j = 0; j <= n; j++)
			printf(" ");
		printf("\n");
	}
	
}