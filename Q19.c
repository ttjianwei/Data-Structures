#include <stdio.h>
void computeM(float matrix[4][4]);
int main31() {
	float array[4][4];
	int i, j;
	printf("Input data: \n");
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 4; j++)
			scanf("%f", &array[i][j]);
	}
	computeM(array);
	printf("Output:\n");
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 4; j++)
			printf("%.2f ", array[i][j]);
		printf("\n");
	}
	return 0;
}

void computeM(float matrix[4][4]) {
	int l,k ;// integer for the nested loops
	float total = 0;//total to be divided
	float average = 0; //average
	float three = 3; //divider
	for (l= 0; l < 4; l++) { //1st loop
		average = 0; //reset
		total = 0; //reset
		for (k= 0; k < 4; k++) { //2nd loop
			total += matrix[l][k];		//adds the 1st 3 digit of the array
			
		}
		average = total / three; //divide the first 3 digit in array and store in 4th
		matrix[l][3] =  average; // store the average in the 4th element of the array

	}
}
