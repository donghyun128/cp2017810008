#include <stdio.h>
int main() {
	int i, n = 0;
	printf("수를 입력하세요.\n");
	scanf_s("%d", &n);
	for (i = 1; i < n; i++)
		if (n%i == 0)
			break;

	if (i == n)
		printf("소수입니다.");

	else if (i != n)
		printf("소수가 아닙니다.");

}