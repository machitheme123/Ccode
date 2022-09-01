#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void)
{
    int num1;
    int denom1;
    int num2;
    int denom2;
    int result_num;
    int result_denom;

    printf("첫번째 분수를 입력하세요: ");
    scanf_s("%d/%d", &num1, &denom1);


    printf("두번째 분수를 입력하세요: ");
    scanf_s("%d/%d", &num2, &denom2);

    result_num = num1 * denom2 + num2 * denom1;
    result_denom = denom1 * denom2;

    printf("둘의 합은 %d/%d 입니다.\n", result_num, result_denom);
    return 0;
}