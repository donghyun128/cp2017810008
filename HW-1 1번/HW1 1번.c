#include <stdio.h>
int main() 
{
	int Max = 0;
	int n1, n2;
	printf("두 수를 입력하세요.\n");
		scanf_s("%d%d", &n1, &n2);
		Max = n1 > n2 ? n1 : n2;
		printf("큰 수는 %d 이다.\n", Max);
		return 0;
}