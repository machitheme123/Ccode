#include <stdio.h>

int main(void)
{
    int i = 1;
    printf("i�� ���� %d\n", ++i);    /* "i�� ���� 2"�� ����Ѵ�. */
    printf("i�� ���� %d\n", i);    /* "i�� ���� 2"�� ����Ѵ�. */

    int j = 1;
    printf("j�� ���� %d\n", j++);    /* "j�� ���� 1"�� ����Ѵ�. */
    printf("j�� ���� %d\n", j);      /* "j�� ���� 2"�� ����Ѵ�. */


    return 0;
}