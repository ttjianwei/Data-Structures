#include <stdio.h>
int rNumDigits1(int num);
int main22()
{
	int number;
	printf("Enter a number: ");
	scanf("%d", &number);
	printf("rNumDigits1(): %d\n", rNumDigits1(number));
	return 0;
}

int rNumDigits1(int num) {
    static int count = 0;
	if (num!=0) {
		
		count++;
		rNumDigits1(num / 10);
		
	}
	return count;
	
}
/* write your code here */