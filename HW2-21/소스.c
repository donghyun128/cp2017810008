#include <stdio.h>
int main() {
	int n, i,k,sum;
	printf("���� �Է��Ͻÿ�.\n");
	scanf_s("%d", &n);
		for (i =2; i <n; i++)
			for (k = 2; k < i;i++)
			{
				if (i == k)
					sum += k;

				else if (k%i == 0)
					break;
			}
		printf("%d ������ ���� %d �̴�.\n", n, sum);
}