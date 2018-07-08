#include <stdio.h>
void reverseAr(int ar[], int size);
int main3()
{
	int ar[20], i, size;
	printf("Enter array size: ");
	scanf_s("%d", &size);
	printf("Enter %d data: ", size);
	for (i = 0; i <= size - 1; i++)
		scanf_s("%d", &ar[i]);
	reverseAr(ar, size);
	printf("reverseAr(): ");
	if (size > 0) {
		for (i = 0; i<size; i++)
			printf("%d ", ar[i]);
	}
	return 0;
}
//is the top ar[] and bottom ar[] interlink as in, in same memory
void reverseAr(int ar[], int size) {
	int temp = 0;
	for (int i = 0; i < size-1; i++) {
		temp = ar[i];		
		 ar[i] = ar[size-i-1];
		 ar[size - i-1] = temp;
		 
	}
	
}