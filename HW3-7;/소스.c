#include <stdio.h>

void SumArray(int *arr, int leng) {
	int sum;
	for (int index = 0; index < leng; index++)
		sum += arr[index];
	printf("Sum : %d\n", sum);
}
	int main() {
		int arr[] = { 0 }, leng = 0, input = 0;
		printf("배열의 갯수를 입력하세요.\n");
		scanf_s("%d", &leng);
		printf("배열의 갯수만큼 정수를 입력하세요.\n");
		for (int i = 1; i <= leng; i++) {
			scanf_s("%d", &arr[i]);
		}
		SumArray(arr, leng);
}