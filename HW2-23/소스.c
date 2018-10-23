#include <stdio.h>
int main() {
	int i, j;
	for (i = 1; i <= 3; i++)
	{
		for (j = 1; j <= 7; j++)
		{
			if (j == 8 - 2 * i)
				printf(" ");
			else printf("*");
		}
		printf("\n");
	}

}