#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>


/*
int main(void) {
	int b;
	int*pb=&b;
	int a = 2147483648;
	*pb = 1 + 2;
	# b=1+2 
	printf("%d", b);
	
	return 0;
}
*/

/*
int main(void) {
	int a = 10;
	const int* pa = &a;
	
	a = 20;



	printf("%d", a);
	return 0;
}
*/

/*
int main(void) {
	char ch;
	int in;
	double db;

	char* pch = &ch;
	int* pin = &in;
	double *pdb=&db;

	return 0;
}
*/

/*
int main(void) {
	char ch;
	int in;

	char* pc = &ch;

	// pc = &ch

	char *pc = &ch;


	int* pi = &in;

	printf("char 형 변수의 주소 크기: %d\n", sizeof(ch));
	printf("int 형 변수의 주소 크기: %d\n", sizeof(in));

	return 0;
}
*/
/*
void swap(int* pa, int* pb);

int main(void) {
	int a = 10, b = 20;

	swap(&a, &b);
	printf("a:%d, b:%d",a,b);
	return 0;
}

void swap(int* pa, int* pb) {
	int temp;

	temp = *pa;
	*pa = *pb;
	*pb = temp;
}
*/
/*
int main(void) {
	int arr[3];
	int* pa = arr;
	int a;

	for (int i = 0; i < 3; i++) {
		*(pa+i) = 100 + i;
		//printf("%5d",arr[i]);
		printf("%5d", *(pa + i));
	}
	return 0;
}
*/
/*
int main(void) {
	int a=1;
	int b = 2;
	int* pa=&a;
	int* pb=&b;

	printf("pa = % 5d, pb = % 5d, pb-pa=%5d", pa, pb, (pb-pa));
}
*/


/*
int main(void) {

	int num[3][4];
	int i=0, j=0,n=1;
	for (i; i < 3; i++) {
		for (j; j < 4; j++) {
			num[i][j] = n;
			n++;
		}
	}

	printf("%d", j);

	for (i; i < 3; i++) {
		for (j; j < 4; j++) {
			printf("%5d", num[i][j] + 1);
			if (j % 4 == 0) {
				printf("\n");
			}
		}
	}


	return 0;
}
*/

/*
int main(void) {
	double a[3][4];
	printf("%lf", a[0][0]);
}
*/

int main(void) {
	char *pc[5];

	pc[0] = "apple";
	pc[1] = "banana";
	pc[2] = "seoul";
	pc[3] = "bird";
	pc[4] = "monitor";

	return 0;
}