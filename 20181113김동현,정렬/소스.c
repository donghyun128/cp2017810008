#include <stdio.h>

//�Լ� : findMinindex()
//�Է� : �迭 (�迭�̸�, �迭����)
//��� : �ּҰ��� �ε���

int findMinindex(int* arr, int length) {
	int minindex = 0;
	for (int count = 1; count < length; count++) {
		if (arr[minindex] > arr[count])
			minindex = count;
	}


	return minindex;
}

//�Լ� findMin()
//�Է� : �迭 (�迭�̸�, �迭����)
//��� : �迭 �ּҰ�

int findMin(int* arr, int length, int j) {
	int Min = arr[0];
	int i;
	for (i = 0; i < length; i++)
	{
		if (Min > arr[i + j])
			Min = arr[i + j];
	}
			return Min;
			
 }

//�Լ� swapElement()
//�Է� : �迭, �� ���� �ε���
//��� : ����.
//�μ�ȿ�� : �迭�� �� �ε��� element�� �ٲ��.

void swapElement(int* arr, int i, int j) {
	int temp;
	temp = arr[i];
	arr[i] = arr[j];
	arr[j] = temp;


}


int SelectionSort(int* arr, int length) {
	int i = 0, a = 0 , b = 0;
	for (i = 0; i < length; i++) {
		a =findMin(arr, length,i);
		b = findMinindex(arr, length);
		swapElement(arr, i, findMin(arr[b], length,i));
	}
	
	for (i = 0; i < length; i++)
	{
		printf("%d", arr[i]);
	}
}



int main() {
	int i = 0;
	int a[5] = { 30, 35 , 27 ,15 ,40 };
	printf("%d\n",findMin(a, 5, 0));
	printf("%d\n", findMinindex(a, 5));
	//printf("%d\n", findMin(a,0,3));
	for (i = 0; i < 5; i++) {
		printf("a[%d] = %d\n",i, *a);
	}
	findMinindex(a, 5);

	printf("%d\n",SelectionSort(a, 5));
	
}


//hint : findmin�� ���� ������ �� �ʿ��ϴ�.


























//�����Լ�

/* void SelectArray(int* arr, int len) {
	int i = 0, j = 0, least, tmp;
	for (i = 0; i < len; i++)
	{
		arr[least] = arr[i];
		for (j = 1; j < len; j++)
			if (arr[least] > arr[j]) {
				tmp = arr[least];
				arr[j] = tmp;
				arr[j] = arr[least];
			}

	}
	for (i = 0; i < len; i++)
	{
		printf("%d", arr[i]);
	}

}

int main() {
	int a[3] = { 15 , 38 ,20 };
	SelectArray(a, 3);

}


//���α׷��� ��: ����� ������ ���� �� �� ������ ���� �������� ������ ������ �������� �����Ѵ�.
*/