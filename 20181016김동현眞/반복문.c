//#include <stdio.h>
//
//int main() {
//	//ctrl-k , ctrl -f : Format, �ҽ��ڵ� ���ÿ����� ���ڰ� �����Ѵ�.
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
//		printf("%d\n", num++); //++num �ƴ�.
//	}
//	printf("The End\n");
//
//	//1���� ���� 100���� 3�� ����� ȭ�鿡 ���
//	printf("\n�ι�°\n");
//	int a = 1;
//	while (a <= 100)
//	{
//		if (a % 3 == 0)
//			printf("a = %d\n", a);
//		a++;
//	}
//
//	//1���� ���� 100���� 3�� ����� ������ ���� ȭ�鿡 ���
//	printf("\n����°\n");
//	int b = 1;
//	while (b <= 100)
//	{
//		if (b % 3 != 0)
//			printf("b = %d\n", b);
//		b++;
//	}
//	
//	//Ű���忡�� ������ �Է¹޾� 3�� ��� ���θ� �˷��ִ� ���α׷�
//	//���� �۾��� �ݺ������� �����ϰ� ����ڰ� 100�� �Է��ϸ� ����
//
//	int input;
//	while (1) {
//		printf("������ �Է��ϼ���. 100 �Է��ϸ� Ż���Դϴ�. \n");
//		scanf_s("%d", &input);
//		if (input == 100)
//			break;//break �б�. �ݺ��� Ż��.
//		if (input >= 1000) {
//			printf("�Է��� ������ 1000���� Ů�ϴ�. �ٽ� �Է��� �ּ���.\n");
//			continue;
//		}
//		if (input % 3 == 0)
//			printf("�Է��� ���� %d�� 3�� ����Դϴ�.\n", input);
//		else
//			printf("�Է��� ���� %d�� 3�� ����� �ƴմϴ�.\n", input);
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
//		printf("n�� �Ҽ�\n");
//	else
//		printf("n�� �Ҽ��� �ƴ�\n");
//
//
//	// 1���� 100������ ������ ���� ���Ͻÿ�.
//
//	printf("\n");
//	int k = 1, sum = 0, Ninput;
//	printf("������ ���� ���ϴ� ���α׷��Դϴ�. �ڿ����� �Է��Ͻÿ�.\n");
//	scanf_s("%d", &Ninput);
//	while (k <= Ninput)
//		sum = sum + k++;
//		//sum += i++;
//	printf("the sum is %d.\n", sum);
//
//	//�ִ����� ���ϱ�
//
//	int n1 = 32, n2 = 48;
//	scanf("%d %d", &n1,&n2);
//	if ()
//
//
//
//}