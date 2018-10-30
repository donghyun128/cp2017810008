#include <stdio.h>

//함수 printNumber()
//입력 : 두 정수
//출력: 없음
//부수효과 : 없음
void printNumber (int a , int b) {
	int count = a;
	while (count <= b)
	{
		printf("%d\n", count++);
	}
	printf("end of program\n");

}

int main() {
	int a = 3, b = 50;
	printNumber(a, b);
	printNumber(-20, 100);
}