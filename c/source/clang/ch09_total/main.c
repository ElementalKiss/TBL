/*
Title: ch09 total
Function: print string
FileName: main.c
Edit Date: 2019.11.18
Editor: reybe
*/
#include <stdio.h>

/*int main(void)
{
	int num1, num2;
	num1 = printf("12345\n");
	num2 = printf("I love my home\n");
	printf("%d, %d \n", num1, num2);
	return 0;
}
*/

/*int Add(int num1, int num2)
{
	return num1 + num2;
}

int main(void)
{
	int result;
	result = Add(3, 4);
	printf("덧셈결과1: %d \n", result);
	result = Add(5, 8);
	printf("덧셈결과2: %d \n", result);
	return 0;
}
*/

/*int Add(int num1, int num2)
{
	return num1 + num2;
}

void ShowAddResult(int num)
{
	printf("덧셈결과 출력: %d", num);
}

int ReadNum(void)
{
	int num;
	scanf_s("%d", &num);
	return num;
}

void HowToUseThisProg(void)
{
	printf("두 개의 정수를 입력하시면 덧셈결과가 출력됩니다. \n");
	printf("자! 그럼 두 개의 정수를 입력하세요. \n");
}

int main(void)
{
	int result, num1, num2;
	HowToUseThisProg();
	num1 = ReadNum();
	num2 = ReadNum();
	result = Add(num1, num2);
	ShowAddResult(result);
	return 0;
}
*/

/*int NumberCompare(int num1, int num2);

int main(void)
{
	printf("3과 4중에서 큰 수는 %d 이다. \n", NumberCompare(3, 4));
	printf("7과 2중에서 큰 수는 %d 이다. \n", NumberCompare(7, 2));
	return 0;
}

int NumberCompare(int num1, int num2)
{
	if (num1 > num2)
		return num1;
	else
		return num2;
}
*/

int AbsCompare(int num1, int num2);
int GetAbsoValue(int num);

int main(void)
{
	int num1, num2;
	printf("두 개의 정수 입력: ");
	scanf_s("%d %d", &num1, &num2);
	printf("%d와 %d중 절대값이 큰 정수: %d \n",
		num1, num2, AbsCompare(num1, num2));
	return 0;
}

int AbsCompare(int num1, int num2)
{
	if (GetAbsoValue(num1) > GetAbsoValue(num2))
		return num1;
	else
		return num2;
}

int GetAbsoValue(int num)
{
	if (num < 0)
		return num * (-1);
	else
		return num;
}