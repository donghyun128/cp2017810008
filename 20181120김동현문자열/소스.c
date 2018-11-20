#include <stdio.h>
#include <string.h>
#define _CRT_SECURE_NO_WARNINGS
void PrintArray(char* arr, int len) {
	for (int index = 0; index < len; index++) {
		printf("array[%d] = %c\n", index, arr[index]);
	}
}

int main() {
	char c; // character [¹®ÀÚ]Çü
	c = 'A';
	printf("c= %c\n", c);
	printf("c= %d\n", c);

	char a[] = { 'H','E','L','L','O' };
	PrintArray(a, 5);
	char b[] = "HELLO"; // => char b[] = {'H','E','L','L','O'}
	printf("%s\n", b);
	printf("the length of the string is %d.\n", strlen(b));

	char str1[50] = "hello";
	char str2 = "World";
//	printf("%s\n", strcat(str1,str2));
	strcpy(str1, str2);
	printf("%s : str1",str1);

	return 0;
}