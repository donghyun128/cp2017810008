#include <stdio.h>
int main() {
	int n = rand() % 100 + 1;
	int c = 1, k = 0;
	for (c = 1; c < +10; c++)
	{
		printf("숫자를 입력하시오:\p");
		scanf_s("%d", &k);
		if (k > n)
			printf("입력하신 숫자보다 큽니다.\n");

		else if (k < n)
			prinf("입력하신 숫자보다 작습니다.\n");

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