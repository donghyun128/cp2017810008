#include <stdio.h>


int main() {
	int a[3] = { 10,20,30 }; // 배열의 선언 : 배열 이름 : a , 배열길이 : 3
	int* ptr;
	//배열의 이름만 사용하면 그 배열의 첫 요소의 포인터값이 된다.
	ptr = a; // ptr = &a[0]
	printf("a[0] = %d\n", a[0]);
	printf("a[0] = %d\n", ptr);
	//포인터변수 이름을 배열 이름으로 사용할 수 있다.
	printf("a[0] = %d\n", ptr[0]);
	printf("a[1] = %d\n", ptr[1]);
	printf("a[2] = %d\n", ptr[2]);

	// a = ptr; → 오류 발생. 배열의 이름은 r-value이기 때문이다. (값만 가지고 있음)
	// 10 = a[2] → 오류발생. 위와 같은 이유.

	/* void printArray (int arr[], int len)
	 = void printArray (int* arr, int len)
	 보통 밑의 함수 표현을 더 많이 사용한다.*/
