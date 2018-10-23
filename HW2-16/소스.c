#include<stdio.h>
int main(){
	int i, n, k;
	printf("수를 입력하시오.:\p");
	scanf_s("%d", &n);
	while (1)
	{
		if (n % 10 ^ i < 1)
		{
			i++;
			continue;
		}

		else
			break;

		

	}
	printf("정수의 자릿수는 %d", i);
}