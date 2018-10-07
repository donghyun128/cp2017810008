#include <stdio.h>
int main()
{
	int input, max = 0;
	printf("첫 번 째 정수를 입력하세요.\n");
		scanf_s("%d", &input);
		max = input;

		printf("두 번 째 정수를 입력하세요.\n");
		scanf_s("%d", &input);
		max = (input > max) ? input : max;

		printf("세 번 째 정수를 입력하세요.\n");
				scanf_s("%d", &input);
				max = (input > max) ? input : max;

				printf("Max : %d\n", max);
				return 0;
}