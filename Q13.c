#include <stdio.h>
void rSumUp2(int n, int *result);
int main21()
{
	int n, result;
	printf("Enter a number: ");
	scanf("%d", &n);
	rSumUp2(n, &result);
	printf("rSumUp2(): %d\n", result);
	return 0;
}

void rSumUp2(int n, int *result) {
	if (n == 1) {
	  *result = 1;
	}
	else {
		rSumUp2(n - 1, result);
		*result += n;
	}
}