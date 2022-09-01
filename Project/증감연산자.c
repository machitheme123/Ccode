#include <stdio.h>

int main(void)
{
    int i = 1;
    printf("i의 값은 %d\n", ++i);    /* "i의 값은 2"를 출력한다. */
    printf("i의 값은 %d\n", i);    /* "i의 값은 2"를 출력한다. */

    int j = 1;
    printf("j의 값은 %d\n", j++);    /* "j의 값은 1"를 출력한다. */
    printf("j의 값은 %d\n", j);      /* "j의 값은 2"를 출력한다. */


    return 0;
}