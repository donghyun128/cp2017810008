#include <stdio.h>

void test(int a) {
	a = 100;

}
void testPointer(int* ptr) {
	*ptr = 700;
}
int main() {
	int a = 10;
	//�����͸� �Ű����� ������ ����
	test(a);
	printf("a = %d\n", a);
	testPointer(&a);
	printf("a = %d\n", a);
	return 0;
}