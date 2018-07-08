#include <stdio.h>
#define SIZE 10
int rCountArray(int array[], int n, int a);
int main30()
{
	int array[SIZE];
	int index, count, target, size;
	printf("Enter array size: ");
	scanf("%d", &size);
	printf("Enter %d numbers: ", size);
	for (index = 0; index < size; index++)
		scanf("%d", &array[index]);
	printf("Enter the target: ");
	scanf("%d", &target);
	count = rCountArray(array, size, target);
	printf("rCountArray(): %d", count);
	return 0;
}
rCountArray(int array[], int n, int a) {

	if (n == 1) {
		if (array[0] == a)
			return 1;
		else return 0;
	}
	if (array[0] == a) {
		return 1 + rCountArray(&array[1], n - 1, a);
	}
	else return 0 + rCountArray(&array[1], n - 1, a);
}