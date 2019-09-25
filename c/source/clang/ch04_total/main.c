#include <stdio.h>

int main(void)
{
    int num1 = 0xA7, num2 = 0x43;
    int num3 = 032, num4 = 024;

    printf("0xA7의 10진수 정수 값: %d \n", num1);
    printf("0x43의 10진수 정수 값: %d \n", num2);
    printf("032의 10진수 정수 값: %d \n", num3);
    printf("024의 10진수 정수 값: %d \n", num4);

    printf("%d - %d = %d \n", num1, num2, num1 - num2);
    printf("%d + %d = %d \n", num3, num4, num3 - num4);


    int i;
    float num5 = 0.0;

    for (i = 0; i < 100; i++)
        num5 += 0.1; // 이 연산을 총 100회 진행하게 됩니다.

    printf("0.1을 100번 더한 결과: %f \n", num5);


    return 0;
}