#include<stdio.h>

void MaxIndex(int arr[], int leng) {
	int max = 0, Mindex = 0;
	for (int i = 1; i <= leng; i++)
		Mindex = max > arr[i] ? Mindex : i;
	printf("Max of array : %d", Mindex);
}

	int main() {
		int arr[] = { 0 }, leng = 0, input = 0;
		printf("�迭�� ������ �Է��ϼ���.\n");
		scanf_s("%d", &leng);
		printf("�迭�� ������ŭ ������ �Է��ϼ���.\n");
		for (int i = 1; i <= leng; i++) {
			scanf_s("%d", &arr[i]);
		}
		MaxIndex(arr, leng);
	}