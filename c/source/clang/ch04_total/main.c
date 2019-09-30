#include <stdio.h>

int main(void)
{
    int num1 = 0xA7, num2 = 0x43;
    int num3 = 032, num4 = 024;

    printf("0xA7�� 10���� ���� ��: %d \n", num1);
    printf("0x43�� 10���� ���� ��: %d \n", num2);
    printf("032�� 10���� ���� ��: %d \n", num3);
    printf("024�� 10���� ���� ��: %d \n", num4);

    printf("%d - %d = %d \n", num1, num2, num1 - num2);
    printf("%d + %d = %d \n", num3, num4, num3 - num4);


    int i;
    float num5 = 0.0;

    for (i = 0; i < 100; i++)
        num5 += 0.1; // �� ������ �� 100ȸ �����ϰ� �˴ϴ�.

    printf("0.1�� 100�� ���� ���: %f \n", num5);

    int num6 = 15;  // 00000000 00000000 00000000 00001111
    int num7 = 20;  // 00000000 00000000 00000000 00010100
    int num8 = num6 & num7; // num6�� num7�� ��Ʈ���� & ����
    printf("AND ������ ���: %d \n", num8);


    int num9 = num6 | num7;
    printf("OR ������ ���: %d \n", num9);

    int num10 = num6 ^ num7;
    printf("XOR ������ ���: %d \n", num10);

    int num11 = ~ num6;
    printf("NOT ������ ���: %d \n", num11);

    int resurt1 = num6 << 1; //num6�� ��Ʈ ���� �������� 1ĭ�� �̵�
    int resurt2 = num6 << 2; //num6�� ��Ʈ ���� �������� 2ĭ�� �̵�
    int resurt3 = num6 << 3; //num6�� ��Ʈ ���� �������� 3ĭ�� �̵�

    printf("1ĭ �̵� ���: %d \n", resurt1);
    printf("2ĭ �̵� ���: %d \n", resurt2);
    printf("3ĭ �̵� ���: %d \n", resurt3);

    int num12 = -16;    // 11111111 11111111 11111111 11110000
    printf("2ĭ ������ �̵��� ���: %d \n", num12 >> 2);
    printf("3ĭ ������ �̵��� ���: %d \n", num12 >> 3);
    
    return 0;
}