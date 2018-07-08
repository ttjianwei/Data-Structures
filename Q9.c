#include <stdio.h>
#include <string.h>
#define SIZE 10
int findTarget(char *target, char nameptr[SIZE][80], int size);

int main12()
{
	char nameptr[SIZE][80];
	char t[40];
	int i, result, size;
	printf("Enter no. of names: ");
	scanf_s("%d", &size);
	printf("Enter %d names: ", size);
	
	
	for (i = 0; i < size; i++) 
		//scanf_s("%s", nameptr[i], sizeof(nameptr[i]));
	scanf("%s", nameptr[i]);
	
	
	printf("Enter target name: ");
	scanf_s("\n");
	gets(t);
	result = findTarget(t, nameptr, size);
	printf("findTarget(): %d\n", result);
	
	return 0;
	

}

int findTarget(char *target, char nameptr[SIZE][80], int size)
{
	int i;
	for (i = 0; i<size; i++) {
		if (strcmp(nameptr[i], target) == 0)
			return i;
	}
	return -1;
}
