#include <stdio.h>
int main() {
	int i=0,j = 0;
	while (1) {
		printf("1���� 9������ ���� �ϳ��� �Է��ϼ���.\n");
		scanf_s("%d", &i);
		if (i <= 0 && i > 9)
		{
			printf("�ٽ� �Է��϶�.");
			continue;
		}


	}
		while (j <= 9)
			printf("%d = %d * %d\n", i*j, i, j);

}