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
	printf("변수 ch의 크기: %d \n", sizeof(ch));	//note: 서식 문자열에서 '%zd'을(를) 사용하는 것이 좋습니다.
	printf("변수 inum의 크기: %d \n", sizeof(inum));
	printf("변수 dnum의 크기: %d \n", sizeof(dnum));

	printf("char의 크기는: %d \n", sizeof(char));	//ptintf 외부 기호(참조 위치: main 함수)에서 확인하지 못했습니다.
	printf("int의 크기는: %d \n", sizeof(int));
	printf("long의 크기는: %d \n", sizeof(long));
	printf("long long의 크기는: %d \n", sizeof(long long));
	printf("float의 크기는: %d \n", sizeof(float));
	printf("double의 크기는: %d \n", sizeof(double));

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
	printf("원의 반지름 입력: ");
	scanf_s("%lf", &rad);	// double형 데이터를 입력 받을 때에는 서식문자 %lf 사용.

	area = rad * rad * 3.1415;
	printf("원의 넓이: %f \n", area);


	printf("--------------------\n");

	char ch1 = 'A', ch2 = 65;
	int ch3 = 'Z', ch4 = 90;	// 소문자와 대문자는 다른거 같다.

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

	printf("정수 245를 실수로: %f \n", num1);
	printf("실수 3.1415를 정수로: %d \n", num2);
	printf("큰 정수 129를 작은 정수로: %d \n", ch);

	printf("--------------------\n");

*/
	
	int num1 = 3, num2 = 4;
	double divresult;
	divresult = num1 / num2;
	printf("나눗셈 결과: %f \n", divresult);	// int인 상태로 이미 나눗셈을 하였으므로 결과값은 0 이다.



	return(0);
}
