#include <stdio.h>

int main(void) {

    int n = 10;
    if (n < 0) {
        printf("n은 0보다 작다\n");
    }
    else {
        if (n == 0) {
            printf("n은 0과 같다\n");
        }
        else {
            printf("n은 0보다 크다\n");
        }
    }
    return 0;
}
