#include<stdio.h>

int main(void)
{
	/* This is a comment */
	int i;
	int j;
	float x;
	float y;

	i = 10;
	j = 20;
	x = 43.2892f;
	y = 5527.0f;

	printf("i = %d, j=%d, x=%f, y=%f\n", i, j, x, y);

	i = 40;
	x = 839.21f;

	printf("|%d|%5d|%-5d|%5.3d|\n", i, i, i, i);
	printf("|%10.3f|%10.3e|%-10g|\n", x, x, x);

	return 0;
}