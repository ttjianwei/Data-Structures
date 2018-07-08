#include <stdio.h>
void minMax(int a[5][5], int *min, int *max);
int main7()
{
	int A[5][5];
	int i, j;
	int min, max;

	printf("Enter the matrix (5x5) row by row: \n");
	for (i = 0; i<5; i++)
		for (j = 0; j<5; j++)
			scanf_s("%d", &A[i][j]);
	minMax(A, &min, &max);
	printf("min = %d; max = %d \n", min, max);
	return 0;
}

void minMax(int a[5][5], int *min, int *max) {
	
	int i,l;

	*min = a[0][0];
	*max = a[0][0];
	for (i=0; i < 5; i++) {
		
		for (l=0; l < 5; l++) {
			if (*min > a[i][l]) {
				*min = a[i][l];
			}

			if (*max< a[i][l]) {
				*max = a[i][l];
			}
		}
	}
}