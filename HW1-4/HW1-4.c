#include <stdio.h>
int main()
{
	int score = 0;
	printf("������ �Է��Ͻÿ�.\n");
	scanf_s("%d", &score);

	switch (score / 10)
	{
	case 10:
	case 9:
	case 8:
		printf("���� : A\n");
		break;

	case 7:
	case 6:
		printf("���� : B\n");
		break;

	case 5:
	case 4:
		printf("���� : C\n");
		break;

	case 3:
	case 2:
		printf("���� : D\n");
		break;

	case 1:
	case 0:
		printf("���� : E\n");
		break;

	default:
		printf("���� : F\n");

	}

	return 0;
}