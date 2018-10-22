#include <stdio.h>
int main() {
	int n = 0, i = 1;
	while (1) {
		printf("정수를 입력하시오\n");
		scanf_s("%d\n", &n);
		if (n == 0)
			break;
		for (i = 1; i <= n, i++;)
		{
			if (n%i == 0)
				printf("%d\p", i);
		}
		
	}

}