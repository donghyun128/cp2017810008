#include <stdio.h>
#include <stdlib.h>

//구조체(structure) : "구성요소" + 요소 간의 "관계"
//구조체 선언 : 기존의 데이터 타입으로 구성하여 새로운 데이터 타입을 선언한다.
//struct complex {
//	double real; // 멤버 변수 (member variable)
//	double imag; // 상등(ditto)
//}; // 구조체 선언 마지막에 반드시 세미콜론으로 끝내야 한다.
//typedef struct complex Complex; //자료형 'struct complex'를 앞으로 Complex라고 부르겠다.

//위의 두 문장을 한 문장으로 만들 수 있다.

typedef struct complex {
	double real;
	double imag;
} Complex;

//데이터 타입의 별칭 선언
typedef int myintType;//자료형 "int"를 앞으로 "myintType"라고도 부르겠다.

					  //함수 printComplex()
					  //입력: 복소수
					  //출력: 없음
					  //부수효과 : 없음

void printComplex(Complex* ptr) {
	printf("%f + j%f\n", ptr->real, ptr->imag);
}

//함수 : ConvertToConjugate()
//입력 : 복소수 (포인터)
//출력 : 없음
//부수효과 : 입력된 복소수가 켤레 복소수로 전환됨
void ConvertToConjugate(Complex* ptr) {
	ptr->imag = -1 * ptr->imag;
}

//함수 : ReturnConjugate()
//입력 : 복소수(포인터)
//출력 : 복소수 변수
//부수효과 : 없음
Complex* ReturnConjugate(Complex* ptr) {
	Complex* tempPtr;
	tempPtr = (Complex*)malloc(sizeof(Complex)); //동적 할당(dynamic allocation) (HEAP 영역 사용) ex) malloc(), free()
	tempPtr->real = ptr->real;tempPtr->imag = -1 * ptr->imag;
	return tempPtr;

	//static : 프로그래밍 동작 중 변하는 것 없음.
	//dynamic : 프로그램이 동작할 때 작동 가능. 원하는 때의 일을 할당해주는 역할


	//Complex temp;
	//temp.real = ptr->real; temp.imag = -1 * ptr->imag;
	//return temp;
}

Complex* AdditionConjugate(Complex* p1, Complex* p2) {
	Complex* Add;
	Add = (Complex*)malloc(sizeof(Complex));
	Add->real = p1->real + p2->real; Add->imag = p1->imag + p2->imag;
	return Add;
}

int main() {
	// 구조체 변수 선언
	Complex a;
	a.real = 10; // 구조체변수의 멤버변수 접근 방법 ==> 구조체변수이름.멤버변수이름
	a.imag = 20;
	printf("%f + j%f\n", a.real, a.imag);




	// 구조체 포인터 변수 선언
	Complex* ptr;
	ptr = &a;
	ptr->real = 100; //구조체 포인터 변수의 멤버변수 접근방법 ==> 구조체 변수이름->멤버변수이름
	ptr->imag = 200;

	printComplex(ptr);
	ConvertToConjugate(&a); printComplex(&a);
	Complex* b = ReturnConjugate(&a); printComplex(&b);
	ConvertToConjugate(&a); printComplex(&a);


	return 0;
	// 대부분의 경우 구조체를 전달할 때 포인터 구조체를 활용한다.
}


