#include <stdio.h>

void ChangeIndex(int arr[]) {
	int i = 0, j = 0, tmp = 0;
	printf("서로 바꿀 배열의 인수를 입력하시오.");
	scanf_s("%d %d", &i, &j);
	tmp = arr[i];
	arr[i] = arr[j];
	arr[j] = tmp;
	return 0;
}

int main() {
	int arr[] = [0], leng = 0, input = 0;
	printf("배열의 갯수를 입력하세요.\n");
	scanf_s("%d", &leng);
	printf("배열의 갯수만큼 정수를 입력하세요.\n");
	for (int i = 1; i <= leng; i++) {
		scanf_s("%d", &arr[i]);
	}
	ChangeIndex(arr);
}