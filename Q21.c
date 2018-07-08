#include <stdio.h>
int findSubstring(char *s, char *t);
int main() {
	char sourceStr[40], targetStr[40];
	printf("Enter a source string: ");
	gets(sourceStr);
	printf("Enter the target string: ");
	gets(targetStr);
	printf("findSubstring(): %d\n", findSubstring(sourceStr, targetStr));
	return 0;
}

int findSubstring(char *s, char *t) {
	int i= 0, j=0 , k = 0 , ifAllMatch = 0 , lengthOfTarget = 0;
	for (j; *(t+j) != '\0';j++) {
		lengthOfTarget++;
	}
	for (i; *(s+i) != '\0'; i++) {
			if (*(s + i) == *t) {
				for (k ; *(t + k) != '\0'; k++) {
					if (*(s + i + k) == *(t + k)) {
						ifAllMatch++;
						printf("%c --> %c\n", *(s + i + k), *(t + k)); //shows how the comparison work
					}
				}
		}	
	}
    printf("\n%d||%d",ifAllMatch,lengthOfTarget);
	if (ifAllMatch == lengthOfTarget) {
		return 1;
	}
	else return -1;
	}


