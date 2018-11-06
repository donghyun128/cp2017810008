#include <stdio.h>
void PrintArray(int arr[], int len) {
	for (int index = 0; index < len; index++) {
		printf("array[%d] = %d\n", index, arr[index]);
	}
}
	
int main() {
	int a[3] = { 10,20,30 };
	int* ptr;
	ptr = a; // ptr = &a[0]. a는 첫번째 배열의 주소를 지정. → 배열의 이름만 사용하면 배열의 첫번째 요소의 주소를 지정;
	printf("a[0] = %d\n", a[0]);
	printf("a[0] = %d\n", *ptr);
	//포인터 변수 이름을 배열 이름으로 사용할 수 있다.
	printf("a[0] = %d\n", ptr[0]);
	printf("a[0] = %d\n", ptr[1]);
	printf("a[0] = %d\n", ptr[2]);
}
