#include <stdio.h>
int findAr(int size, int array[], int target);
int main4()
{
	int ar[20];
	int size, i, target;

	printf("Enter array size: ");
	scanf_s("%d", &size);
	printf("Enter %d data: ", size);
	for (i = 0; i <= size - 1; i++)
		scanf_s("%d", &ar[i]);
	printf("Enter the target number: ");
	scanf_s("%d", &target);
	printf("findAr(): %d",
		findAr(size, ar, target));
	return 0;
}
/* write your code here */
int findAr(int size,int array[], int target) {
	int i = 0;
	
	for (i = 0; i < size; i++) {
		if (array[i] == target) {
			return i;
		}
		
	}
	return -1;
}
