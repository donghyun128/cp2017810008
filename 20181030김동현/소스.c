#include <stdio.h>
int main() {
	int x;
	int a[4]; //�迭 ����
	//�迭�� �̸� : a
	// 2. ����� �ڷ��� : int
	// 3. �迭�� ���� : 4
	// int a[4] , // �迭 ����
	/*a[0] = 20;
	a[1] = 200;
	a[2] = 2000;
	a[3] = 20000;*/
	int len;
	int a[4] = { 2,20,200,2000 }; // �迭 �ʱ�ȭ ��� . 
	int arr[] = { 3,30,300 };
	printArrary(a, len);//�迭�� �Ű������� ( �迭���̸� a, �迭�� ���� len)
	int count = 0;
	while (count < 4)
	{
		printf("a[%d] = %d\n", count, a[count]);
		count++;
	} 

	//�迭�� �Ű������� �Լ��� ������ ���


	//�Լ� gr ()
		return 0;
}