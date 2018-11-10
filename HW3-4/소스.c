#include <stdio.h>
int Smallest(int a, int b, int c)
{
	int Min = 0;
	Min = a;
	Min = Min < b ? Min : b;
	Min = Min < c ? Min : c;
	printf("Smallest Number is %d.\t", Min);
	return Min;
}

int main() {
	int a, b, c;
	printf("세 수를 입력하세요.\t");
	scanf_s("%d %d %d", &a, &b, &c);
	Smallest(a, b, c);
	return 0;
}