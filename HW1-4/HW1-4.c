#include <stdio.h>
int main()
{
	int score = 0;
	printf("점수를 입력하시오.\n");
	scanf_s("%d", &score);

	switch (score / 10)
	{
	case 10:
	case 9:
	case 8:
		printf("학점 : A\n");
		break;

	case 7:
	case 6:
		printf("학점 : B\n");
		break;

	case 5:
	case 4:
		printf("학점 : C\n");
		break;

	case 3:
	case 2:
		printf("학점 : D\n");
		break;

	case 1:
	case 0:
		printf("학점 : E\n");
		break;

	default:
		printf("학점 : F\n");

	}

	return 0;
}