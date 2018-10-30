#include <stdio.h>
int main() {
	int x;
	int a[4]; //배열 선언
	//배열의 이름 : a
	// 2. 요소의 자료형 : int
	// 3. 배열의 길이 : 4
	// int a[4] , // 배열 선언
	/*a[0] = 20;
	a[1] = 200;
	a[2] = 2000;
	a[3] = 20000;*/
	int len;
	int a[4] = { 2,20,200,2000 }; // 배열 초기화 방법 . 
	int arr[] = { 3,30,300 };
	printArrary(a, len);//배열을 매개변수로 ( 배열의이름 a, 배열이 길이 len)
	int count = 0;
	while (count < 4)
	{
		printf("a[%d] = %d\n", count, a[count]);
		count++;
	} 

	//배열은 매개변수를 함수에 던지는 방법


	//함수 gr ()
		return 0;
}