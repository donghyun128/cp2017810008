void swapElement(int* arr, int i, int j) {
	int temp;
	temp = arr[i];
	arr[i] = arr[j];
	arr[j] = temp;


}

//�Լ� : InsertElement()
//�Է� : �迭�̸�, �����Ϸ��� ����� �ε���
//��� : ����
//�μ�ȿ�� : �迭�� ele��ұ��� ���ĵ�
void InsertElement(int* arr, int ele) {
	while(ele != 0){
		if (arr[ele - 1] > arr[ele]) {
			swapElement(arr, arr[ele - 1], arr[ele]);// ���� ��Ұ� ũ�� �� ��Ҹ� �ٲٰ�
			
		}

		else break; //������ ��
		ele--;
	}
	
}
//�Լ� : InsertionSort
//�Է� : �迭, �迭�� ����
//��� : ����
//�μ�ȿ�� : �迭�� ���ĵ�
InsertionSort(int* arr, int length) {
	for (int i = 1; i<length; i++) {
		InsertElement(arr, i);
	}
}

int main() {
 }