#include <stdio.h>
int main() {
	int n, i,k,sum;
	printf("수를 입력하시오.\n");
	scanf_s("%d", &n);
		for (i =2; i <n; i++)
			for (k = 2; k < i;i++)
			{
				if (i == k)
					sum += k;

				else if (k%i == 0)
					break;
			}
		printf("%d 이하의 합은 %d 이다.\n", n, sum);
}