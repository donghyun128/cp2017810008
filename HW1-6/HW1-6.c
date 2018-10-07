#include <stdio.h>
int main()
	{
	int a,b = 0;
		printf("두 자리 정수를 입력하세요.\n");
		scanf_s("%d", &a);
		b = a % 10 * 10 + a / 10;
			printf("%d", b);

	}
