#include <stdio.h>
int main() {
	int i, j, k;

	for (i = 0; i < 11; i++)
		for (j = 0; j < 11; j++)
			for (k = 0; k <= 12 - 2j; k++)
			{
				printf("*");
				printf("%d", (2 * j + 1) % 2);
			}


}