/*
Title: ch07 total
Function: print string
FileName: main.c
Edit Date: 2019.11.02
Editor: reybe
*/
#include <stdio.h>

int main(void)
{
/*	int num = 0;

	while (num < 5)
	{
		printf("Hello world! %d \n", num);
		num++;

	}
*/	
	printf("--------------------\n");

/*	int dan = 0, num = 1;
	printf("�� ��?");
	scanf_s("%d", &dan);

	while (num < 10)
	{
		printf("%d X %d = %d \n", dan, num, dan*num);
		num++;
	}
*/
	printf("--------------------\n");

/*	int cur = 2;
	int is = 0;

	while (cur < 10)	// 2�ܺ��� 9�ܱ��� �ݺ�
	{
		is = 1;	// ���ο� ���� ������ ���ؼ�
		while (is < 10)	// �� ���� 1���� 9�� ���� ǥ��
		{
			printf("%d X %d = %d \n", cur, is, cur*is);
			is++;
		}
		cur++;
	}
*/
	printf("--------------------\n");	

/*	int total = 0, num = 0;
	
	do
	{
		printf("���� �Է�(0 to quit): ");
		scanf_s("%d", &num);
		total += num;
	} while (num!= 0);	// num!���� "!"�� �ǹ̰� ����?
	printf("�հ�: %d \n", total);

*/
	printf("--------------------\n");

/*	int total = 0;
	int i, num;
	printf("0���� num������ ����, num��? ");
	scanf_s("%d", &num);

	for (i = 0; i < num + 1; i++)
		total += i;

	printf("0���� %d���� �������: %d \n", num, total);
*/
	printf("--------------------\n");

/*	double total = 0.0;
	double input = 0.0;
	int num = 0;

	for (; input >= 0.0;)
	{
		total += input;
		printf("�Ǽ� �Է�(minus to quit) : ");
		scanf_s("%lf", &input);
		num++;
	}
	printf("���: %f \n", total / (num - 1));
*/
	printf("--------------------\n");

	int cur, is;

	for (cur = 2; cur < 10; cur++)
	{
		for (is = 1; is < 10; is++)
		{
			printf("%d X %d = %d \n", cur, is, cur*is);
		}
		printf("\n");
	}


	return 0;
}