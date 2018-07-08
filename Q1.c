#include <stdio.h>
#include <math.h>
float aSum(int n, float vector[]);
int main2()
{
	float vector[10];
	int i, n;

	printf("Enter vector size: ");
	scanf_s("%d", &n);
	printf("Enter %d data: ", n);
	for (i = 0; i<n; i++)
		scanf_s("%f", &vector[i]);
	printf("aSum(): %f", aSum(n, vector));
	return 0;
}


//Answer
float aSum(int n,float vector[]) {

	float sum = 0.0;
	for (int i = 0; i < n; i++) {
		if (vector[i] < 0.0) {
			vector[i] = vector[i] * -1.0;
		}
		sum += vector[i];
	}
	return sum;
}