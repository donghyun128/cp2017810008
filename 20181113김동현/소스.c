#include <stdio.h>


int main() {
	int a[3] = { 10,20,30 }; // �迭�� ���� : �迭 �̸� : a , �迭���� : 3
	int* ptr;
	//�迭�� �̸��� ����ϸ� �� �迭�� ù ����� �����Ͱ��� �ȴ�.
	ptr = a; // ptr = &a[0]
	printf("a[0] = %d\n", a[0]);
	printf("a[0] = %d\n", ptr);
	//�����ͺ��� �̸��� �迭 �̸����� ����� �� �ִ�.
	printf("a[0] = %d\n", ptr[0]);
	printf("a[1] = %d\n", ptr[1]);
	printf("a[2] = %d\n", ptr[2]);

	// a = ptr; �� ���� �߻�. �迭�� �̸��� r-value�̱� �����̴�. (���� ������ ����)
	// 10 = a[2] �� �����߻�. ���� ���� ����.

	/* void printArray (int arr[], int len)
	 = void printArray (int* arr, int len)
	 ���� ���� �Լ� ǥ���� �� ���� ����Ѵ�.*/
