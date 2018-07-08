#include <stdio.h>
int rSumOddDigits1(int n);
int main40()
{
	int num, result;
	printf("Enter a number: ");
	scanf("%d", &num);
	printf("rSumOddDigits1(): %d\n", rSumOddDigits1(num));
	return 0;
}

int rSumOddDigits1(int n) {


	

		if (n == 0)
			return 0;

		if (n % 2 == 1) //if n is odd
						//returns last digit of n + sumOddDigits(n/10) => n/10 removes the last digit of n
			return n % 10 + rSumOddDigits1(n / 10);

		else
			return  rSumOddDigits1(n / 10);

	}

	/*
	static int total = 0;
	if (n == 0) {
		return total;
	}
	if (n % 2 == 1) { //if n is odd		
		total = total + n % 10;
		printf("%d\n", total);
		return n % 10 + rSumOddDigits1(n / 10);
	}

	else if(n % 2 == 0)
	{   	
		 //if its even, extract last digit and add in total
		
		return rSumOddDigits1(n / 10);
	
	*/
