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
	printf("제 나이는 10진수로 %d살 16진수로 %X살입니다. \n", myAge, myAge);

	printf("--------------------\n");

	int num1 = 7, num2 = 13;
	printf("%o %#o \n", num1, num1);
	printf("%x %#x \n", num2, num2);

	printf("--------------------\n");

	printf("%f \n", 0.1234);
	printf("%e \n", 0.1234);	// e 표기법 기반의 출력.
	printf("%f \n", 0.12345678);
	printf("%e \n", 0.12345678);	// e 표기법 기반의 출력.

	printf("--------------------\n");

	double d1 = 1.23e-3;	// 0.00123
	double d2 = 1.23e-4;	// 0.000123
	double d3 = 1.23e-5;	// 0.0000123
	double d4 = 1.23e-6;	// 0.00000123

	printf("%g \n", d1);	// %f 스타일 출력.
	printf("%g \n", d2);	// %f 스타일 출력.
	printf("%g \n", d3);	// %e 스타일 출력.
	printf("%g \n", d4);	// %e 스타일 출력.

	printf("--------------------\n");

	printf("%s, %s, %s \n", "AAA", "BBB", "CCC");

	printf("--------------------\n");

	printf("%-8s %14s %5s \n", "이름", "전공학과", "학년");
	printf("%-8s %14s %5s \n", "조민욱", "통상학", "4");
	printf("%-8s %14s %5s \n", "조민혁", "컴퓨터공학", "4");
	printf("%-8s %14s %5s \n", "예일해", "더덕학", "3");

	printf("--------------------\n");

	int num3, num4, num5;
	printf("세 개의 정수 입력: ");
	scanf_s("%d %o %x", &num3, &num4, &num5);

	printf("입력된 정수 10진수 출력: ");
	printf("%d %d %d \n", num3, num4, num5);

	printf("--------------------\n");

	float num6;
	double num7;
	long double num8;

	printf("실수 입력1(e 표기법으로): ");
	scanf_s("%f", &num6);
	printf("입력된 실수 %f \n", num6);

	printf("실수 입력2(e 표기법으로): ");
	scanf_s("%lf", &num7);
	printf("입력된 실수 %lf \n", num7);

	printf("실수 입력3(e 표기법으로): ");
	scanf_s("%Lf", &num8);
	printf("입력된 실수 %Lf \n", num8);

	return 0;
}
