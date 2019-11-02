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
	printf("몇 단?");
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

	while (cur < 10)	// 2단부터 9단까지 반복
	{
		is = 1;	// 새로운 단의 시작을 위해서
		while (is < 10)	// 각 단의 1부터 9의 곱을 표현
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
		printf("정수 입력(0 to quit): ");
		scanf_s("%d", &num);
		total += num;
	} while (num!= 0);	// num!에서 "!"의 의미가 무었?
	printf("합계: %d \n", total);

*/
	printf("--------------------\n");

/*	int total = 0;
	int i, num;
	printf("0부터 num까지의 덧셈, num은? ");
	scanf_s("%d", &num);

	for (i = 0; i < num + 1; i++)
		total += i;

	printf("0부터 %d까지 덧셈결과: %d \n", num, total);
*/
	printf("--------------------\n");

/*	double total = 0.0;
	double input = 0.0;
	int num = 0;

	for (; input >= 0.0;)
	{
		total += input;
		printf("실수 입력(minus to quit) : ");
		scanf_s("%lf", &input);
		num++;
	}
	printf("평균: %f \n", total / (num - 1));
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