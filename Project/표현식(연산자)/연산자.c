#include <stdio.h>

int main(void)
{
    int d=0;
    int i1=1;
    int i2=2;
    int i3=3;
    int i4=4;
    int i5=5;
    int j1=6;
    int j2=7;
    int j3=8;
    int j4=9;
    int j5=10;
    int first_sum;
    int second_sum;
    int total;

    printf("ù��° (���ڸ���) ���ڸ� �Է����ּ���: ");
    scanf("%1d", &d);
    printf("ù��° �ټ��ڸ� ���ڸ� �Է����ּ���: ");
    scanf("%1d%1d%1d%1d%1d", &i1, &i2, &i3, &i4, &i5);
    printf("�ι�° �ټ��ڸ� ���ڸ� �Է����ּ���: ");
    scanf("%1d %1d %1d %1d %1d", &j1, &j2, &j3, &j4, &j5);

        first_sum = d + i2 + i4 + j1 + j3 + j5;
    second_sum = i1 + i3 + i5 + j2 + j4;
    total = 3 * first_sum + second_sum;

    printf("Ȯ���ڸ���: %d\n", 9 - ((total - 1) % 10));

    return 0;
}