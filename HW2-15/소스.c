#include <stdio.h>
int main() {
	int n = rand() % 100 + 1;
	int c = 1, k = 0;
	for (c = 1; c < +10; c++)
	{
		printf("���ڸ� �Է��Ͻÿ�:\p");
		scanf_s("%d", &k);
		if (k > n)
			printf("�Է��Ͻ� ���ں��� Ů�ϴ�.\n");

		else if (k < n)
			prinf("�Է��Ͻ� ���ں��� �۽��ϴ�.\n");

		else if (k == n)
		{
			n = 0;
			break;
		}
  
		c++;
	}
	if (n = 0)
	{
		printf("Clear!");
	}
	else if (c = 10)
		printf("Game over.");
}