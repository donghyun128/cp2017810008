#include <stdio.h>

void swap(int* ptr1, int* ptr2) {
	int s;
	s = *ptr1;
	*ptr1 = *ptr2;
	*ptr2 = s;
	
}
int main() {
	int a = 10, b = 20; // a,b에 메모리할당과 초기화.
	//swap : 변수 a,b의 값을 바꾼다.
	swap(&a, &b); // int* 자료형의 메모리 두개 생성. a와 b의 주소를 메모리 영역에 복사. 메모리 이름은 ptr1, ptr2. 함수가 종료되면 메모리 영역이 소멸됨.
	printf("a = %d , b= %d\n", a, b);
	return 0;
}