#include <stdio.h>
int main() {
	int i, j = 0;
	while (1) {
		printf("���� �Է��ϼ���.\n");
		scanf_s("%d", &i);
		if (i == 0)
			break;
		i = i > j ? i : j;
		j = i;

	}
	printf("�ִ��� %d �̴�.\n", j);

}