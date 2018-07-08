#include <stdio.h>
char *stringncpy(char *s1, char *s2, int n);
int main10()
{
	char sourceStr[40] = "source";
	char targetStr[40], *target;
	int length;

	printf("Enter a string: ");
	gets(sourceStr);
	//printf("%s", sourceStr);
	printf("Enter no. of characters: ");
	scanf_s("%d", &length);
	
	target = stringncpy(targetStr, sourceStr, length);
	printf("stringncpy(): %s\n", target);
	return 0;
}

char *stringncpy(char *s1, char *s2, int n) {//s1 will be destination string/address, s2 is your source string/address
	int k;
	for (k = 0; k < n; k++) { //for k =0; k less than number declared, k++
		if (*(s2+k) != '\0')//if s2[0],s2[1].... not equal to null
			*(s1+k) = *(s2+k); // s1 = s2
		else
			break; //break out of the loop
	}

	*(s1+k) = '\0';
	for (k; k < n; k++) //h=k meaning k will start at the number which at the loop broke
		*(s1+k) = '\0'; //append null until it has the same character as specified (e.g i am a boy = 7, userinput length = 10, 3 nulls will be appended)
	return s1;
}
/* write your code here */