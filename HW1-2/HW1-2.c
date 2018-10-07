#include <stdio.h>
int main() {
	int a;
	printf("정수를 입력하라\n");
	scanf_s("%d", &a);
	if (a % 2 == 0)
	{
		printf("짝수입니다.");
	}

	else if (a % 2 == 1)
	{
		printf("홀수입니다.");
	}

}