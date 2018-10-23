#include <stdio.h>
int main() {
	int i,n;
	for (i = 2; i <= 100; i++)
		for (n = 2; n <= i; n++)
		{
			if (i % n == 0)
				break;
			if (i == n)
				printf("%d", i);
		}
	
}