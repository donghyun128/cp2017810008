#include <stdio.h>
int main() {
	int i, n = 0;
	printf("���� �Է��ϼ���.\n");
	scanf_s("%d", &n);
	for (i = 1; i < n; i++)
		if (n%i == 0)
			break;

	if (i == n)
		printf("�Ҽ��Դϴ�.");

	else if (i != n)
		printf("�Ҽ��� �ƴմϴ�.");

}