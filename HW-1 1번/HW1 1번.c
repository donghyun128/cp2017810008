#include <stdio.h>
int main() 
{
	int Max = 0;
	int n1, n2;
	printf("�� ���� �Է��ϼ���.\n");
		scanf_s("%d%d", &n1, &n2);
		Max = n1 > n2 ? n1 : n2;
		printf("ū ���� %d �̴�.\n", Max);
		return 0;
}