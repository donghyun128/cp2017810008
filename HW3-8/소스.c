#include <stdio.h>

void MaxArray(int *arr, int leng) {
	int max = 0;
	for (int i = 1; i <= leng; i++)
		max = max > arr[i] ? max : arr[i];
	printf("Max of array : %d", max);
}

int main() {
	int arr[] = { 0 }, leng = 0, input = 0;
	printf("�迭�� ������ �Է��ϼ���.\n");
	scanf_s("%d", &leng);
	printf("�迭�� ������ŭ ������ �Է��ϼ���.\n");
	for (int i = 1; i <= leng; i++) {
		scanf_s("%d", &arr[i]);
	}
	MaxArray(arr, leng);
}