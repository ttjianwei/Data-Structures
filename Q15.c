#include <stdio.h>
void rDigitPos2(int num, int digit, int *pos);
int main23()
{
	int number;
	int digit, result = 0;
	printf("Enter a number: ");
	scanf("%d", &number);
	printf("Enter the digit: ");
	scanf("%d", &digit);
	rDigitPos2(number, digit, &result);
	printf("rDigitPos2(): %d\n", result);
	return 0;
}

void rDigitPos2(int num, int digit, int *pos) {
	static int count = 1;
	if (num % 10 != digit) {


		count++;
		
		rDigitPos2(num/10, digit, pos);

	}
	
	*pos = count;
}
		