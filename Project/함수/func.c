#include <stdio.h>

double get_average(double left, double right)
{
    return (left + right) / 2;
}

int main(void) {
    double x;
    double y;
    double z;

    printf("���� �� ���� �Է����ּ���: ");
    scanf("%lf%lf%lf", &x, &y, &z);
    printf("%g�� %g�� ���: %g\n", x, y, get_average(x, y));
    printf("%g�� %g�� ���: %g\n", y, z, get_average(y, z));
    printf("%g�� %g�� ���: %g\n", z, x, get_average(z, x));

    return 0;
}