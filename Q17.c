#include <stdio.h>
void rSquare2(int num, int *result);
int main27()
{
	int x, result;
	printf("Enter a number: ");
	scanf("%d", &x);
	rSquare2(x, &result);
	printf("rSquare2(): %d\n", result);
	return 0;
}

void rSquare2(int num, int *result) {
	static int count = 0, k = 1 , x = 0;
	if (count < num) {
		
		x += k;
		k += 2;
		count++;
		
		rSquare2(num, result);
	}
	*result = x;
}