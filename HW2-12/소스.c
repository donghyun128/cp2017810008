#include <stdio.h>
int main() {
	int i = 0, a = 0;
	while (1) {
		printf("������ �Է��ϼ���.\n");
		scanf_s("%d", &a);
		if (a == 0)
			break;
		i = (i > a) ? i : a;
		continue;
	}
	printf("���� ū ���� %d �̴�.\n", i);
}