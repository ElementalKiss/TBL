/*
Title: ch05 total
Function: print string
FileName: main.c
Edit Date: 2019.10.14
Editor: reybe
*/
#include <stdio.h>

int main(void)
{
/*	char ch = 9;
	int inum = 1052;
	double dnum = 3.1415;
	printf("���� ch�� ũ��: %d \n", sizeof(ch));	//note: ���� ���ڿ����� '%zd'��(��) ����ϴ� ���� �����ϴ�.
	printf("���� inum�� ũ��: %d \n", sizeof(inum));
	printf("���� dnum�� ũ��: %d \n", sizeof(dnum));

	printf("char�� ũ���: %d \n", sizeof(char));	//ptintf �ܺ� ��ȣ(���� ��ġ: main �Լ�)���� Ȯ������ ���߽��ϴ�.
	printf("int�� ũ���: %d \n", sizeof(int));
	printf("long�� ũ���: %d \n", sizeof(long));
	printf("long long�� ũ���: %d \n", sizeof(long long));
	printf("float�� ũ���: %d \n", sizeof(float));
	printf("double�� ũ���: %d \n", sizeof(double));

	char num1 = 1, num2 = 2, result1 = 0;
	short num3 = 300, num4 = 400, result2 = 0;
	
	printf("size of num1 & num2: %d, %d \n", sizeof(num1, sizeof(num2)));


	printf("--------------------\n");


	char num1 = 1, num2 = 2, result1 = 0;
	short num3 = 300, num4 = 400, result2 = 0;

	printf("size of num1 & num2: %d, %d, \n", sizeof(num1), sizeof(num2));
	printf("size of num3 & num4: %d, %d, \n", sizeof(num3), sizeof(num4));

	printf("size of char add: %d \n", sizeof(num1 + num2));
	printf("size of short add: %d \n", sizeof(num3 + num4));

	result1 = num1 + num2;
	result2 = num3 + num4;
	printf("size of result1 & result2: %d, %d \n", sizeof(result1), sizeof(result2));


	printf("--------------------\n");


	double rad;
	double area;
	printf("���� ������ �Է�: ");
	scanf_s("%lf", &rad);	// double�� �����͸� �Է� ���� ������ ���Ĺ��� %lf ���.

	area = rad * rad * 3.1415;
	printf("���� ����: %f \n", area);


	printf("--------------------\n");

	char ch1 = 'A', ch2 = 65;
	int ch3 = 'Z', ch4 = 90;	// �ҹ��ڿ� �빮�ڴ� �ٸ��� ����.

	printf("%c %d \n", ch1, ch1);
	printf("%c %d \n", ch2, ch2);
	printf("%c %d \n", ch3, ch3);
	printf("%c %d \n", ch4, ch4);


	printf("--------------------\n");


	printf("literal int size: %d \n", sizeof(7));
	printf("literal double size: %d \n", sizeof(7.14));
	printf("literal char size: %d \n", sizeof('A'));

	
	printf("--------------------\n");

	double num1 = 245;
	int num2 = 3.1415;
	int num3 = 129;
	char ch = num3;

	printf("���� 245�� �Ǽ���: %f \n", num1);
	printf("�Ǽ� 3.1415�� ������: %d \n", num2);
	printf("ū ���� 129�� ���� ������: %d \n", ch);

	printf("--------------------\n");

*/
	
	int num1 = 3, num2 = 4;
	double divresult;
	divresult = num1 / num2;
	printf("������ ���: %f \n", divresult);	// int�� ���·� �̹� �������� �Ͽ����Ƿ� ������� 0 �̴�.



	return(0);
}
