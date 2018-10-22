//#include <stdio.h>
//
//int main() {
//	//ctrl-k , ctrl -f : Format, 소스코드 선택영역을 예쁘게 포맷한다.
//	//ctrl -] : matching parentheses
//	//ctrl-k, ctrl -c : Comment out
//	//ctrl-k, ctrl -u : undo comment out
//	int num = 1;
//	while (num <= 10)
//	{
//		/*num = num +1*/
//
//		/*printf("%d\n", num);
//		num++;*/
//
//		printf("%d\n", num++); //++num 아님.
//	}
//	printf("The End\n");
//
//	//1에서 부터 100까지 3의 배수만 화면에 출력
//	printf("\n두번째\n");
//	int a = 1;
//	while (a <= 100)
//	{
//		if (a % 3 == 0)
//			printf("a = %d\n", a);
//		a++;
//	}
//
//	//1에서 부터 100까지 3의 배수를 제외한 수만 화면에 출력
//	printf("\n세번째\n");
//	int b = 1;
//	while (b <= 100)
//	{
//		if (b % 3 != 0)
//			printf("b = %d\n", b);
//		b++;
//	}
//	
//	//키보드에서 정수를 입력받아 3의 배수 여부를 알려주는 프로그램
//	//위의 작업을 반복적으로 수행하고 사용자가 100을 입력하면 종료
//
//	int input;
//	while (1) {
//		printf("정수를 입력하세요. 100 입력하면 탈출입니다. \n");
//		scanf_s("%d", &input);
//		if (input == 100)
//			break;//break 분기. 반복문 탈출.
//		if (input >= 1000) {
//			printf("입력한 정수가 1000보다 큽니다. 다시 입력해 주세요.\n");
//			continue;
//		}
//		if (input % 3 == 0)
//			printf("입력한 정수 %d는 3의 배수입니다.\n", input);
//		else
//			printf("입력한 정수 %d는 3의 배수가 아닙니다.\n", input);
//
//
//	}
//
//	//quiz4
//
//	int i = 2, isPrime = 1, n = 9;
//	while (i < n) {
//		if (n%i == 0) {
//			isPrime = 0;
//			break;
//		}
//		i++;
//	}
//	if (isPrime)
//		printf("n은 소수\n");
//	else
//		printf("n은 소수가 아님\n");
//
//
//	// 1에서 100까지의 정수의 합을 구하시오.
//
//	printf("\n");
//	int k = 1, sum = 0, Ninput;
//	printf("정수의 합을 구하는 프로그램입니다. 자연수를 입력하시오.\n");
//	scanf_s("%d", &Ninput);
//	while (k <= Ninput)
//		sum = sum + k++;
//		//sum += i++;
//	printf("the sum is %d.\n", sum);
//
//	//최대공약수 구하기
//
//	int n1 = 32, n2 = 48;
//	scanf("%d %d", &n1,&n2);
//	if ()
//
//
//
//}