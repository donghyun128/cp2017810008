#include <stdio.h>
void PrintArray(int arr[], int len) {
	for (int index = 0; index < len; index++) {
		printf("array[%d] = %d\n", index, arr[index]);
	}
}
	
int main() {
	int a[3] = { 10,20,30 };
	int* ptr;
	ptr = a; // ptr = &a[0]. a�� ù��° �迭�� �ּҸ� ����. �� �迭�� �̸��� ����ϸ� �迭�� ù��° ����� �ּҸ� ����;
	printf("a[0] = %d\n", a[0]);
	printf("a[0] = %d\n", *ptr);
	//������ ���� �̸��� �迭 �̸����� ����� �� �ִ�.
	printf("a[0] = %d\n", ptr[0]);
	printf("a[0] = %d\n", ptr[1]);
	printf("a[0] = %d\n", ptr[2]);
}
