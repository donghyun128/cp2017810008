#include <stdio.h>

int main() {
	int a = 10; //1)
	int* ptr;   //2)
	ptr = &a;   //3) &a → "ampersand of" a. 변수 a의 주소 
	*ptr = 20;  //4), *ptr : "Data of" ptr. 포인터 변수 ptr의 데이터 내용
	printf("a = %d\n", a);
	return 0;
	// 1) : 변수 이름 a , 10이 담긴 메모리 저장공간
}