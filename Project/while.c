#include <stdio.h>

int main(void)
{
    int i;
    int n=10;

    /*printf("�� ���α׷��� ������ ǥ�� ����մϴ�.\n");
    printf("�� ǥ�� ũ�⸦ �������ּ���:  ");
    scanf("%d", &n);*/

    i = 1;
    while (i <= n) {
        printf("%10d%10d\n", i, i * i);
        ++i;
    }

    return 0;
}