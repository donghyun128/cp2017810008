#include <stdio.h>

void ChangeIndex(int arr[]) {
	int i = 0, j = 0, tmp = 0;
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
	ChangeIndex(arr);
}