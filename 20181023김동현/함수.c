#include <stdio.h>

int gVar = 100; // 전역변수 (global variable). 사용하지 말 것을 권장. 아니 쓰지 마! 코드 이해에 어려움

//함수 sum()
	//입력 : 두 정수
	//출력 : 두 정수의 합
	//부수효과 : 없음

int sum(int a, int q) {
	int c;
	c = a + q + gVar;
	return c;
}
// 9~13 line → 함수 정의
// 9 line → 함수 선언 : {1. 함수 이름 2. 매개변수의 갯수(2) 3. 매개변수의 자료형 4. 반환값의 자료형 (integer)} 
//                       = 함수 호출하기 위해 필요한 준비물
// 중괄호 → 함수 본체


// 함수 : goodPrint
// 입력 : 없음
// 출력 : 없음
// 부수효과 : 화면에 good 출력

void GoodPrint() {
	printf("Good\n");
}


int main() {
	int x = 10, y = 20, z;
	z = sum(x, y); // ← 함수 호출
	printf("%d\n", z);
	GoodPrint();
/* ☆ line 21 : 1) x,y를 위한 메모리 추가 공간 확보 2) 확보한 공간에 매개변수의 값을 복사 
                3) line 33의 x와 q 메모리에 access (x와 y에서는 값을 가져오는 것 뿐임). c의 메모리 공간 확보하고 함수 연산 결과 복사.
*/



}
