/*
Title: ch08 total
Function: print string
FileName: main.c
Edit Date: 2019.11.11
Editor: reybe
*/
#include <stdio.h>

int main(void)
{
/*	int num;
	printf("���� �Է�: ");
	scanf_s("%d", &num);

	if (num < 0)	// num�� 0���� ������ �Ʒ��� ���� ����
		printf("�Է� ���� 0���� �۴�. \n");

	if (num > 0)	// num�� 0���� ũ�� �Ʒ��� ���� ����
		printf("�Է� ���� 0���� ũ��. \n");

	if (num == 0)	// num�� 0�̸� �Ʒ��� ���� ����
		printf("�Է� ���� 0�̴�. \n");
*/
	printf("--------------------\n");

/*	int opt;
	double num1, num2;
	double result;

	printf("1.���� 2.���� 3.���� 4.������ \n");
	printf("����?");
	scanf_s("%d", &opt);
	printf("�� ���� �Ǽ� �Է�: ");
	scanf_s("%lf %lf", &num1, &num2);

	if (opt == 1)
		result = num1 + num2;
	if (opt == 2)
		result = num1 - num2;
	if (opt == 3)
		result = num1 * num2;
	if (opt == 4)
		result = num1 / num2;

	printf("���: %f \n", result);0
*/
	printf("--------------------\n");

/*	int num;
	
	for (num = 1; num < 100; num++)
	{
		if (num % 3 == 0 || num % 4 == 0)
			printf("3 �Ǵ� 4�� ���: %d \n", num);
	}
*/
	printf("--------------------\n");
	
/*	int num;
	printf("���� �Է�: ");
	scanf_s("%d", &num);

	if (num < 0)
		printf("�Է� ���� 0���� �۴�. \n");
	else
		printf("�Է� ���� 0���� ���� �ʴ�. \n");
*/
	printf("--------------------\n");

/*	int opt;
	double num1, num2;
	double result;

	printf("1.���� 2.���� 3.���� 4.������ \n");
	printf("����?");
	scanf_s("%d", &opt);
	printf("�� ���� �Ǽ� �Է�: ");
	scanf_s("%lf %lf", &num1, &num2);

	if (opt == 1)
		result = num1 + num2;
	else if (opt == 2)
		result = num1 - num2;
	else if (opt == 3)
		result = num1 * num2;
	else
		result = num1 / num2;

	printf("���: %f \n", result);
*/
	printf("--------------------\n");

/*	int num, abs;
	printf("���� �Է�: ");
	scanf_s("%d", &num);

	abs = num > 0 ? num : num * (-1);
	printf("���밪: %d", abs);
*/
	printf("--------------------\n");

/*	int sum = 0, num = 0;

	while (1)
	{
		sum += num;
		if (sum > 5000)
			break;	// break�� ���� ���� �ݺ��� Ż��
		num++;
	}
	
	printf("sum: %d \n", sum);
	printf("num: %d \n", num);
*/
	printf("--------------------\n");

/*	int num;
	printf("start! ");

	for (num=1; num < 20; num++)
	{
		if (num % 2 == 0 || num % 3 == 0)
			continue;
		printf("%d ", num);
	}
	printf("end! \n");
*/
	printf("--------------------\n");

/*	int num;
	printf("1�̻� 5������ ���� �Է�: ");
	scanf_s("%d", &num);

	switch (num)
	{
	case 1:
		printf("1�� ONE \n");
		break;
	case 2:
		printf("2�� TWO \n");
		break;
	case 3:
		printf("3�� THREE \n");
		break;
	case 4:
		printf("4�� FOUR \n");
		break;
	case 5:
		printf("5�� FIVE \n");
		break;
	default:
		printf("I don't know! \n");
	}
*/
	printf("--------------------\n");

/*	char sel;
	printf("M ����, A ����, E ���� \n");
	printf("�Է�: ");
	scanf_s("%c", &sel);

	switch (sel)
	{
	case 'M':
	case 'm':
		printf("Morning \n");
		break;
	case 'A':
	case 'a':
		printf("Afternoon \n");
		break;
	case 'E':
	case 'e':
		printf("Evening \n");
		break;	// ���ʿ��� break��!
	}
*/
	printf("--------------------\n");

	int num;
	printf("�ڿ��� �Է�: ");
	scanf_s("%d", &num);

	if (num == 1)
		goto ONE;
	else if (num == 2)
		goto TWO;
	else
		goto OTHER;

ONE:
	printf("1�� �Է��ϼ̽��ϴ�! \n");
	goto END;
TWO:
	printf("2�� �Է��ϼ̽��ϴ�! \n");
	goto END;
OTHER:
	printf("3 Ȥ�� �ٸ� ���� �Է��ϼ̱���! \n");

END:
	return 0;
}