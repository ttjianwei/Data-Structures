#include <stdio.h>
#define SIZE 3
void swap2Rows(int ar[SIZE][SIZE], int r1, int r2);
void display(int ar[SIZE][SIZE]);
int main14() {
	int array[SIZE][SIZE];
	int row1, row2;
	int i, j;

	printf("Enter the matrix row by row: \n");
	for (i = 0; i<SIZE; i++)
		for (j = 0; j<SIZE; j++)
			scanf_s("%d", &array[i][j]);
	printf("Enter two rows for swapping: ");
	scanf_s("%d %d", &row1, &row2);
	swap2Rows(array, row1, row2);
	printf("The array is: \n");
	display(array);

	return 0;
}
void display(int M[SIZE][SIZE])
{
	int l, m;
	for (l = 0; l < 3; l++) {
		for (m = 0; m < 3; m++)
			printf("%d ", M[l][m]);
		printf("\n");
	}
}

void swap2Rows(int ar[SIZE][SIZE],int r1, int r2) {
	
	int i=0;
	
	int temp;
	for (i; i < 3; i++) {
		temp = ar[r1][i];
		ar[r1][i] = ar[r2][i];
		ar[r2][i] = temp;
		//printf("%d", ar[r1][i]);
	}
}
/* write your code here */