#include <stdio.h>

void swap(int* ptr1, int* ptr2) {
	int s;
	s = *ptr1;
	*ptr1 = *ptr2;
	*ptr2 = s;
	
}
int main() {
	int a = 10, b = 20; // a,b�� �޸��Ҵ�� �ʱ�ȭ.
	//swap : ���� a,b�� ���� �ٲ۴�.
	swap(&a, &b); // int* �ڷ����� �޸� �ΰ� ����. a�� b�� �ּҸ� �޸� ������ ����. �޸� �̸��� ptr1, ptr2. �Լ��� ����Ǹ� �޸� ������ �Ҹ��.
	printf("a = %d , b= %d\n", a, b);
	return 0;
}