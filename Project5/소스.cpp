#include <stdio.h>
#include <stdlib.h>
/*
int main(void) {
	
	double* weight = (double*)malloc(sizeof(double));
	int* scores = (int*)malloc(10*sizeof(int));
	char* string = (char*)malloc(80*sizeof(char));

	int* max = (int*)malloc(sizeof(int));
	if (max == NULL) {
		printf("메모리 부족");
		return 1;
	}
	*max = 999;
	free(max);
	
	int i = 0;
	int** matrix = (int**)malloc( 4 * sizeof(int *));

	for (i; i < 4; i++) {
		matrix[i] = (int *)malloc(5 * sizeof(int));

		if (matrix[i] == NULL){
			printf("null");
			exit();
		}
			
	}

	

	for (i; i < 4; i++) {
		free(matrix[i]);
	}
	free(matrix);
	


	return 0;
}
*/


int main(int argc,char*argv) {
	int i;
	for (i = 1; i < argc; i++) {
		printf("%s\n", argv[i]);
	}
	return 0;
}