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


    return 0;
}