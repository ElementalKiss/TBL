/*
Title: ch05 total
Function: print string
FileName: main.c
Edit Date: 2019.10.19
Editor: reybe
*/
#include <stdio.h>

int main(void)
{
	printf("I like progtamming \n");
	printf("I love you puppy! \n");
	printf("I am so happy \n");
	
	printf("--------------------\n");

	int myAge = 12;
	printf("�� ���̴� 10������ %d�� 16������ %X���Դϴ�. \n", myAge, myAge);

	printf("--------------------\n");

	int num1 = 7, num2 = 13;
	printf("%o %#o \n", num1, num1);
	printf("%x %#x \n", num2, num2);

	printf("--------------------\n");

	printf("%f \n", 0.1234);
	printf("%e \n", 0.1234);	// e ǥ��� ����� ���.
	printf("%f \n", 0.12345678);
	printf("%e \n", 0.12345678);	// e ǥ��� ����� ���.

	printf("--------------------\n");

	double d1 = 1.23e-3;	// 0.00123
	double d2 = 1.23e-4;	// 0.000123
	double d3 = 1.23e-5;	// 0.0000123
	double d4 = 1.23e-6;	// 0.00000123

	printf("%g \n", d1);	// %f ��Ÿ�� ���.
	printf("%g \n", d2);	// %f ��Ÿ�� ���.
	printf("%g \n", d3);	// %e ��Ÿ�� ���.
	printf("%g \n", d4);	// %e ��Ÿ�� ���.

	printf("--------------------\n");

	printf("%s, %s, %s \n", "AAA", "BBB", "CCC");

	printf("--------------------\n");

	printf("%-8s %14s %5s \n", "�̸�", "�����а�", "�г�");
	printf("%-8s %14s %5s \n", "���ο�", "�����", "4");
	printf("%-8s %14s %5s \n", "������", "��ǻ�Ͱ���", "4");
	printf("%-8s %14s %5s \n", "������", "������", "3");

	printf("--------------------\n");

	int num3, num4, num5;
	printf("�� ���� ���� �Է�: ");
	scanf_s("%d %o %x", &num3, &num4, &num5);

	printf("�Էµ� ���� 10���� ���: ");
	printf("%d %d %d \n", num3, num4, num5);

	printf("--------------------\n");

	float num6;
	double num7;
	long double num8;

	printf("�Ǽ� �Է�1(e ǥ�������): ");
	scanf_s("%f", &num6);
	printf("�Էµ� �Ǽ� %f \n", num6);

	printf("�Ǽ� �Է�2(e ǥ�������): ");
	scanf_s("%lf", &num7);
	printf("�Էµ� �Ǽ� %lf \n", num7);

	printf("�Ǽ� �Է�3(e ǥ�������): ");
	scanf_s("%Lf", &num8);
	printf("�Էµ� �Ǽ� %Lf \n", num8);

	return 0;
}
