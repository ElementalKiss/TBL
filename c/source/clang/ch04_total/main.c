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

    int num6 = 15;  // 00000000 00000000 00000000 00001111
    int num7 = 20;  // 00000000 00000000 00000000 00010100
    int num8 = num6 & num7; // num6과 num7의 비트단위 & 연산
    printf("AND 연산의 결과: %d \n", num8);


    int num9 = num6 | num7;
    printf("OR 연산의 결과: %d \n", num9);

    int num10 = num6 ^ num7;
    printf("XOR 연산의 결과: %d \n", num10);

    int num11 = ~ num6;
    printf("NOT 연산의 결과: %d \n", num11);

    int resurt1 = num6 << 1; //num6의 비트 열을 왼쪽으로 1칸씩 이동
    int resurt2 = num6 << 2; //num6의 비트 열을 왼쪽으로 2칸씩 이동
    int resurt3 = num6 << 3; //num6의 비트 열을 왼쪽으로 3칸씩 이동

    printf("1칸 이동 결과: %d \n", resurt1);
    printf("2칸 이동 결과: %d \n", resurt2);
    printf("3칸 이동 결과: %d \n", resurt3);

    int num12 = -16;    // 11111111 11111111 11111111 11110000
    printf("2칸 오른쪽 이동의 결과: %d \n", num12 >> 2);
    printf("3칸 오른쪽 이동의 결과: %d \n", num12 >> 3);
    
    return 0;
}