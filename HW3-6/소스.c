#include <stdio.h>
int SumOfPrime(int num)
{
	scanf_s("%d", &num);
	int *arr;
	arr = (int*)malloc(sizeof(int) * num);
	int i = 2;
	int sum = 0;

	for (i = 2; i <= num; i++) {
		arr[i] = i; // �� �迭
	}
	for (i = 2; i <= num; i++) {
		if (arr[i] == 0)
			continue;
		for (int j = i + i; j <= num; j += i)
			arr[j] = 0; // �Ҽ��� ����� �Ҽ��� �ƴ�.
	}
	for (i = 2; i < num; i++) {
		if (arr[i] != 0) {
			if (arr[i] > 2 && arr[i] < num -1) {
				printf("%d = %d + %d\t", num, arr[i], num - arr[i]);
			}
		}
	}
}

int main() {
	int num = 0;
	printf("¦���� �Է��ϼ���.\t");
	SumOfPrime(num);
		return 0;
}

