#include <stdio.h>
int NumArray(int a, int b) {
	int i = 0;
	scanf_s("%d %d", &a, &b);
	for (i = a; i <= b; i++) {
		printf("%d\t",i);
	}
}
int main(){
	int x = 0, y = 0;
	NumArray(x, y);
	return 0;
}