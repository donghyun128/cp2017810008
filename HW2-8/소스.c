#include <stdio.h>
int main() {
	int i=0,j = 0;
	while (1) {
		printf("1부터 9사이의 숫자 하나를 입력하세요.\n");
		scanf_s("%d", &i);
		if (i <= 0 && i > 9)
		{
			printf("다시 입력하라.");
			continue;
		}


	}
		while (j <= 9)
			printf("%d = %d * %d\n", i*j, i, j);

}