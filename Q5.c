#include <stdio.h>
#define SIZES 3
void swap2Cols(int ar[SIZES][SIZES], int c1, int c2);
void display2(int ar[SIZES][SIZES]);
int main6()
{
	int array[SIZES][SIZES];
	int col1, col2;
	int i, j;

	printf("Enter the matrix row by row: \n");
	for (i = 0; i<SIZES; i++)
		for (j = 0; j<SIZES; j++)
			scanf_s("%d", &array[i][j]);
	printf("Enter two columns for swapping: ");
	scanf_s("%d %d", &col1, &col2);
	swap2Cols(array, col1, col2);
	printf("The array is: \n");
	display(array);
	return 0;
}
void display2(int M[SIZES][SIZES])
{
	int l, m;
	for (l = 0; l < 3; l++) {
		for (m = 0; m < 3; m++)
			printf("%d ", M[l][m]);
		printf("\n");
	}
}


void swap2Cols(int ar[SIZES][SIZES], int r1, int r2) {

	int i = 0;

	int temp=0;
	for (i; i < 3; i++) {
		temp = ar[i][r1];
		ar[i][r1] = ar[i][r2];
		ar[i][r2] = temp;
		
	}
}
/* write your code here */