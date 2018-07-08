
#include <stdio.h>
#include <string.h>
void processString(char *str, int size);
int main8()
{
	char str[50];
	int size;
	printf("Enter a string: ");
	gets(str);
	size = strlen(str);
	processString(str, size);
	return 0;
}

void processString(char *str, int size) {
	int i;
	int vowel = 0;
	int digit = 0;
	for (i = 0; i < size; i++) {
		if (*(str + i) == 'a' || *(str + i) == 'A' || *(str + i) == 'E' || *(str + i) == 'e' || *(str + i) == 'i' || *(str + i) == 'I' || *(str + i) == 'o' ||
			*(str + i) == 'O' || *(str + i) == 'u' || *(str + i) == 'U') {
			vowel++;
		}
		else if (*(str + i) == '0' || *(str + i) == '1' || *(str + i) == '2' || *(str + i) == '3' ||
			*(str + i) == '4' || *(str + i) == '5' || *(str + i) == '6' || *(str + i) == '7' || *(str + i) == '8' || *(str + i) =='9') {
			digit++;
		}
	}
	printf("Total number of vowels : %d\n",vowel);
	printf("Total number of digits : %d\n", digit);
}
