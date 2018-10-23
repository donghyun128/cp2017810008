#include <stdio.h>
int main() {
	int i, j = 0;
	while (1) {
		printf("수를 입력하세요.\n");
		scanf_s("%d", &i);
		if (i == 0)
			break;
		i = i > j ? i : j;
		j = i;

	}
	printf("최댓값은 %d 이다.\n", j);

}