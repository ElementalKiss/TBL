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
	printf("정수 입력: ");
	scanf_s("%d", &num);

	if (num < 0)	// num이 0보다 작으면 아래의 문장 실행
		printf("입력 값은 0보다 작다. \n");

	if (num > 0)	// num이 0보다 크면 아래의 문장 실행
		printf("입력 값은 0보다 크다. \n");

	if (num == 0)	// num이 0이면 아래의 문장 실행
		printf("입력 값은 0이다. \n");
*/
	printf("--------------------\n");

/*	int opt;
	double num1, num2;
	double result;

	printf("1.덧셈 2.뺄셈 3.곱셈 4.나눗셈 \n");
	printf("선택?");
	scanf_s("%d", &opt);
	printf("두 개의 실수 입력: ");
	scanf_s("%lf %lf", &num1, &num2);

	if (opt == 1)
		result = num1 + num2;
	if (opt == 2)
		result = num1 - num2;
	if (opt == 3)
		result = num1 * num2;
	if (opt == 4)
		result = num1 / num2;

	printf("결과: %f \n", result);0
*/
	printf("--------------------\n");

/*	int num;
	
	for (num = 1; num < 100; num++)
	{
		if (num % 3 == 0 || num % 4 == 0)
			printf("3 또는 4의 배수: %d \n", num);
	}
*/
	printf("--------------------\n");
	
/*	int num;
	printf("정수 입력: ");
	scanf_s("%d", &num);

	if (num < 0)
		printf("입력 값은 0보다 작다. \n");
	else
		printf("입력 값은 0보다 작지 않다. \n");
*/
	printf("--------------------\n");

/*	int opt;
	double num1, num2;
	double result;

	printf("1.덧셈 2.뺄셈 3.곱셈 4.나눗셈 \n");
	printf("선택?");
	scanf_s("%d", &opt);
	printf("두 개의 실수 입력: ");
	scanf_s("%lf %lf", &num1, &num2);

	if (opt == 1)
		result = num1 + num2;
	else if (opt == 2)
		result = num1 - num2;
	else if (opt == 3)
		result = num1 * num2;
	else
		result = num1 / num2;

	printf("결과: %f \n", result);
*/
	printf("--------------------\n");

/*	int num, abs;
	printf("정수 입력: ");
	scanf_s("%d", &num);

	abs = num > 0 ? num : num * (-1);
	printf("절대값: %d", abs);
*/
	printf("--------------------\n");

/*	int sum = 0, num = 0;

	while (1)
	{
		sum += num;
		if (sum > 5000)
			break;	// break문 실행 따라서 반복문 탈출
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
	printf("1이상 5이하의 정수 입력: ");
	scanf_s("%d", &num);

	switch (num)
	{
	case 1:
		printf("1은 ONE \n");
		break;
	case 2:
		printf("2은 TWO \n");
		break;
	case 3:
		printf("3은 THREE \n");
		break;
	case 4:
		printf("4은 FOUR \n");
		break;
	case 5:
		printf("5은 FIVE \n");
		break;
	default:
		printf("I don't know! \n");
	}
*/
	printf("--------------------\n");

/*	char sel;
	printf("M 오전, A 오후, E 저녘 \n");
	printf("입력: ");
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
		break;	// 불필요한 break문!
	}
*/
	printf("--------------------\n");

	int num;
	printf("자연수 입력: ");
	scanf_s("%d", &num);

	if (num == 1)
		goto ONE;
	else if (num == 2)
		goto TWO;
	else
		goto OTHER;

ONE:
	printf("1을 입력하셨습니다! \n");
	goto END;
TWO:
	printf("2을 입력하셨습니다! \n");
	goto END;
OTHER:
	printf("3 혹은 다른 값을 입력하셨군요! \n");

END:
	return 0;
}