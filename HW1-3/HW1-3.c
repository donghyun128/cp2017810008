#include <stdio.h>
int main()
{
	int input, max = 0;
	printf("ù �� ° ������ �Է��ϼ���.\n");
		scanf_s("%d", &input);
		max = input;

		printf("�� �� ° ������ �Է��ϼ���.\n");
		scanf_s("%d", &input);
		max = (input > max) ? input : max;

		printf("�� �� ° ������ �Է��ϼ���.\n");
				scanf_s("%d", &input);
				max = (input > max) ? input : max;

				printf("Max : %d\n", max);
				return 0;
}