#include <stdio.h>
int main() {
	int m, d, total;
	printf("���� �Է��϶�.\n");
		scanf_s("%d", &m);
		printf("���� �Է��϶�.\n");
		scanf_s("%d", &d);
		switch (m)
		{
		case 1:
			total = d;
			printf("%d��", total);
			break;

		case 2:
			total == (31 + d);
			printf("%d��", total);
			break;
		case 3:
			total == (31 + 28 + d);
			printf("%d��", total);
			break;
		case 4:
			total == (31 + 28 + 31 + d);
			printf("%d��", total);
			break;
		case 5:
			total == (31 + 28 + 31 + 30 + d);
			printf("%d��", total);
			break;

		case 6:
			total == (31 + 28 + 31 + 30 + 31 + d);
				printf("%d��", total);
			break;
		
		case 7:
			total == (31 + 28 + 31 + 30 + 31 + 30 + d);
			printf("%d��", total);
			break;
		case 8:
			total == (31 + 28 + 31 + 30 + 31 + 30 + 31 + d);
			printf("%d��", total);
			break;
		case 9:
			total == (31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + d);
			printf("%d��", total);
			break;
		case 10:
			total == (31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30+ d);
			printf("%d��", total);
			break;
		case 11: 
			total == (31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + d);
			printf("%d��", total);
			break;
		case 12:
			total == (31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30 + d);
			printf("%d��", total);
			break;
		}
}