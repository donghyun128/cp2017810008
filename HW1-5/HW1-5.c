#include <stdio.h>
int main()
{
	char select[16] = "0";
	printf("choose one of the following.\n");
	printf("apple\norange\nbanana\npeach\n");
	printf("enter your choice here : ");
	scanf_s("%d\n", &select);
	scanf_s("%d", &select);

	if (select == "orange")
	{
		printf("\n-------------\nYour choice is \"orange\"."); // ū����ǥ ��� : \"����\"
	}
	else if (select == "apple")
	{
		printf("\n-------------\nYour choice is \"apple\".");
	}

	else if (select == "banana")
	{
		printf("\n-------------\nYour choice is \"banana\".");
	}

	else if (select == "peach")
	{
		printf("\n-------------\nYour choice is \"peach\".");
	}

	else
		printf("�߸��� �Է��Դϴ�.");
	
}