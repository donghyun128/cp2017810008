#include <stdio.h>

int main() {
	int a = 10; //1)
	int* ptr;   //2)
	ptr = &a;   //3) &a �� "ampersand of" a. ���� a�� �ּ� 
	*ptr = 20;  //4), *ptr : "Data of" ptr. ������ ���� ptr�� ������ ����
	printf("a = %d\n", a);
	return 0;
	// 1) : ���� �̸� a , 10�� ��� �޸� �������
}