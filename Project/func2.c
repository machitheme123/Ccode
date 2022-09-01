/* ���ڰ� �Ҽ����� ���θ� �Ǻ��Ѵ� */

#include <stdbool.h>
#include <stdio.h>

bool is_prime(int number)
{
    int divisor;

    if (number <= 1) {
        return false;
    }

    for (divisor = 2; divisor * divisor <= number; ++divisor) {
        if (number % divisor == 0) {
            return false;
        }
    }

    return true;
}

int main(void) {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (is_prime(number)) {
        printf("�Ҽ���\n");
    }
    else {
        printf("�Ҽ� �ƴ�\n");
    }

    return 0;
}