#include <stdio.h>
int main()
{
	int i = 0;
	while (1){
		{
			printf("���� ������ �Է��϶�\n");
			scanf_s("%d", i);
			if (i <= 0)
				printf("�ٽ� �Է��Ͻÿ�.");
			continue;
		}
		printf("%d", 2 * i*i);

}