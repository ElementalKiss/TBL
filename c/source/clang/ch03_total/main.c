/*
Title: ch01 total
Function: print string
FileName: main.c
Edit Date: 2019.09.19
Editor: reybe
*/
#include <stdio.h>

int main(void)
{
    3 + 4;   //3과 4의 합을 명령함

    int num1, num2; //변수 num1, num2의 선언
    num1 = 10;  //num1의 초기화
    num2 = 20;  //num2의 초기화
    int num3 = 30, num4 = 40;   //변수 num1, num4의 선언 및 초기화
    printf("num1: %d, num2: %d \n", num1, num2);
    printf("num3: %d, num4: %d \n", num3, num4);
    
    printf("--------------------\n");

    num1 = 3;
    num2 = 4;
    int result = num1 + num2;
    printf("덧셈 결과: %d \n", result);
    printf("%d + %d = %d \n", num1, num2, result);
    printf("%d와(과) %d의 합은 %d입니다. \n", num1, num2, result);

    printf("--------------------\n");

    num1 = 9, num2 = 2;
    printf("%d + %d = %d \n", num1, num2, num1 + num2);
    printf("%d - %d = %d \n", num1, num2, num1 - num2);
    printf("%d * %d = %d \n", num1, num2, num1 * num2);
    printf("%d / %d의 몫 = %d \n", num1, num2, num1 * num2);
    printf("%d / %d의 나머지 = %d \n", num1, num2, num1 % num2);

    printf("--------------------\n");

    num1 = 2, num2 = 4, num3 = 6;
    num1 += 3;
    num2 *= 4;
    num3 %= 5;

    printf("--------------------\n");

    num1 = +2, num2 = -4;
    num1 = -num1;
    printf("num1: %d \n", num1);
    num2 = -num2;
    printf("num2: %d \n", num2);

    printf("--------------------\n");

    num1 = 12, num2 = 12;
    printf("num1: %d \n", num1);
    printf("num1++: %d \n", num1++);
    printf("num1: %d \n", num1);

    printf("num2: %d \n", num2);
    printf("++num2: %d \n", ++num2);
    printf("num2: %d \n", num2);

    printf("--------------------\n");

    num1 = 10;
    num2 = (num1--) + 2;

    printf("num1: %d \n", num1);
    printf("num2: %d \n", num2);

    printf("--------------------\n");

    num1 = 10;
    num2 = 12;
    int result1, result2, result3;
    result1 = (num1 == num2);
    result2 = (num1 <= num2);
    result3 = (num1 > num2);

    printf("result1: %d \n", result1);
    printf("result2: %d \n", result2);
    printf("result3: %d \n", result3);

    printf("--------------------\n");

    num1 = 10;
    num2 = 12;
    result1 = (num1 == 10 && num2 == 12);
    result2 = (num1 < 12 || num2 > 12);
    result3 = (!num1);

    printf("result1: %d \n", result1);
    printf("result2: %d \n", result2);
    printf("result3: %d \n", result3);

    num1 = 1;
    num2 = 2;
    
    printf("Hello"), printf("world! \n");
    num1++, num2++;
    printf("%d", num1), printf("%d", num2); // 후위연산자의 역활

    printf("--------------------\n");

    int result4;
    int num5, num6;
    
    printf("정수 one: ");
    scanf_s("%d", &num5);
    printf("정수 two: ");
    scanf_s("%d", &num6); //scanf 사용하면 "This function or variable may be unsafe. Consider using scanf_s instead." 나오면서 빌드 실패

    result4 = num5 + num6;
    printf("%d + %d = %d \n", num5, num6, result4);

    printf("--------------------\n");

    int result5;
    int num7, num8, num9;
    printf("세 개의 정수 입력: ");
    scanf_s("%d %d %d", &num7, &num8, &num9);

    result5 = num7 + num8 + num9;
    printf("%d + %d + %d = %d \n", num7, num8, num9, result5);

    return 0;
}