#include <stdio.h>
//�Լ��̸� addArray()
//�Է� : �迭
//��� : �迭 �� ��ҵ��� ��
//�μ�ȿ�� : ����
int addArray (int arr[], int length) {
	int sum = 0, index = 0;
	while (index <= length)
	{
		sum += arr[index++];
	}
	return sum;
}

int main() {
	int a[3] = { 10,20,30 };
	addArray(a, 3);
}