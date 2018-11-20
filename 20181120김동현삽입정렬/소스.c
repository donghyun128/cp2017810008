void swapElement(int* arr, int i, int j) {
	int temp;
	temp = arr[i];
	arr[i] = arr[j];
	arr[j] = temp;


}

//함수 : InsertElement()
//입력 : 배열이름, 삽입하려는 요소의 인덱스
//출력 : 없음
//부수효과 : 배열의 ele요소까지 정렬됨
void InsertElement(int* arr, int ele) {
	while(ele != 0){
		if (arr[ele - 1] > arr[ele]) {
			swapElement(arr, arr[ele - 1], arr[ele]);// 왼쪽 요소가 크면 두 요소를 바꾸고
			
		}

		else break; //작으면 끝
		ele--;
	}
	
}
//함수 : InsertionSort
//입력 : 배열, 배열의 길이
//출력 : 없음
//부수효과 : 배열이 정렬됨
InsertionSort(int* arr, int length) {
	for (int i = 1; i<length; i++) {
		InsertElement(arr, i);
	}
}

int main() {
 }