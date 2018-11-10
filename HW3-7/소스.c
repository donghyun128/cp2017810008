#include <stdio.h>

void SumArray(int arr[], int leng) {
	int sum;
	for (int index = 0; index < leng; index++)
		sum += arr[index];
	printf("Sum : %d\n", sum);
}

void MaxArray(int arr[], int leng) {
	int max = 0;
	for (int i = 1; i <= leng; i++)
		max = max > arr[i] ? max : arr[i];
	printf("Max of array : %d", max);
}

void MaxIndex(int arr[], int leng) {
	int max = 0, Mindex = 0;
	for (int i = 1; i <= leng; i++)
		Mindex = max > arr[i] ? Mindex : i;
	printf("Max of array : %d", Mindex);
}

void ChangeIndex(int arr[]) {
	int i = 0, j =0, tmp = 0;
	printf("���� �ٲ� �迭�� �μ��� �Է��Ͻÿ�.");
		scanf_s("%d %d", &i, &j);
		tmp = arr[i];
		arr[i] = arr[j];
		arr[j] = tmp;
		return 0;
}
int main() {
	int arr[] = [0], leng = 0, input = 0;
	printf("�迭�� ������ �Է��ϼ���.\n");
	scanf_s("%d", &leng);
	printf("�迭�� ������ŭ ������ �Է��ϼ���.\n");
		for (int i = 1; i <= leng; i++) {
			scanf_s("%d", &arr[i]);
		}

		while (1) {
			printf("���ϴ� �Լ��� ��ȣ�� �Է��Ͻÿ�.\n");
			printf("1.���� �迭�� ��\t2.�迭�� �ִ�\n3.�迭�� �ִ��� �ε���\t4.�迭�� �� �ε��� ���� ��ȯ");
			scanf_s("%d\n", &input);
			switch (input)
			{
			case 1: SumArray(arr[leng], leng); break;

			case 2: MaxArray(arr[leng], leng); break;

			case 3: MaxIndex(arr[leng], leng); break;

			case 4: ChangeIndex(arr[leng]); break;
			
			default: break;
			}

		}

}