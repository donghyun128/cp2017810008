#include <stdio.h>
//함수이름 addArray()
//입력 : 배열
//출력 : 배열 각 요소들의 합
//부수효과 : 없음
int addArray (int arr[], int length) {
	int sum = 0, index = 0;
	while (index <= length)
	{
		sum += arr[index++];
	}
	return sum;
}

int main() {
	int a[3] = { 10,20,30 };
	addArray(a, 3);
}