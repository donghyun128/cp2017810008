#include <stdio.h>

void SumArray(int *arr, int leng) {
	int sum;
	for (int index = 0; index < leng; index++)
		sum += arr[index];
	printf("Sum : %d\n", sum);
}
	int main() {
		int arr[] = { 0 }, leng = 0, input = 0;
		printf("�迭�� ������ �Է��ϼ���.\n");
		scanf_s("%d", &leng);
		printf("�迭�� ������ŭ ������ �Է��ϼ���.\n");
		for (int i = 1; i <= leng; i++) {
			scanf_s("%d", &arr[i]);
		}
		SumArray(arr, leng);
}