#include <stdio.h>

int main(void) {
    int digits = 0;
    int n;

    printf("������ �ƴ� ������ �Է��Ͻÿ�: ");
    scanf("%d", &n);

    do {
        n /= 10;
        ++digits;
    } while (n > 0);

    printf("�ڸ����� %d�̴�.\n", digits);

    return 0;
}