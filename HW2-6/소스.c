#include <stdio.h>
int main()
{
	int i = 0;
	while (1){
		{
			printf("양의 정수를 입력하라\n");
			scanf_s("%d", i);
			if (i <= 0)
				printf("다시 입력하시오.");
			continue;
		}
		printf("%d", 2 * i*i);

}