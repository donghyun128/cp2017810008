#include <stdio.h>
int main() {
	int i = 0, a = 0;
	while (1) {
		printf("정수를 입력하세요.\n");
		scanf_s("%d", &a);
		if (a == 0)
			break;
		i = (i > a) ? i : a;
		continue;
	}
	printf("가장 큰 수는 %d 이다.\n", i);
}