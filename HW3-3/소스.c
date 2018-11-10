#include <stdio.h>
#include <stdlib.h>
#include <memory.h>
#include <stdbool.h>

int EratosSum(int a, int max) {
	scanf_s("%d %d", &a, &max);
	int *arr;
	arr = (int*)malloc(sizeof(int) * max);
	int i = 2;
	int sum = 0;

	for (i = a; i <= max; i++) {
		arr[i] = i; // 수 배열
	}
	for (i = a; i <= max; i++) {
		if (arr[i] == 0)
			continue;
		for (int j = i + i; j <= max; j += i)
			arr[j] = 0; // 소수의 배수는 소수가 아님.
	}
	for (i = a; i < max; i++) {
		if (arr[i] != 0) {
			printf("%d\t", arr[i]);
		}
		
	}
	
}

int main() {
	int x = 0, y = 0;
	EratosSum(x, y);
	return 0;
}
// 오류 : 3 을 시작점으로 입력시 4를 소수로 인식.