#include <stdio.h>
int rDigitValue1(int, int);
int main()
{
	int k;
	int number, pos, digit;
	printf("Enter a number: ");
	scanf("%d", &number);
	printf("Enter the position: ");
	scanf("%d", &k);
	printf("rDigitValue1(): %d\n", rDigitValue1(number, k));
	return 0;
}

int rDigitValue1(int number, int k) {
	if (k == 0) {
		return 0;

	}
	else if (k == 1) {
		return number % 10;
	}
	else rDigitValue1(number / 10, k - 1);
}
/* write your code here */