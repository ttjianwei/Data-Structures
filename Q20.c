#include <stdio.h>
int palindrome(char *str);
int main32() {
	char str[80];
	printf("Enter your string: ");
	gets(str);
	if (palindrome(str)==1)
		printf("palindrome(): A palindrome.\n");
	else
		printf("palindrome(): Not a palindrome.\n");
	return 0;
}

int palindrome(char *str) {
	char *ptr1 = str; //stores original pointer to user input e.g 90000
	char *ptr2 = str + strlen(str) - 1; //stores the location of the end of the pointer e.g 90008
	while (ptr2>ptr1) { // memory location of p2 bigger than p1 (90008> 90000)
		if (tolower(*ptr1) != tolower(*ptr2)) { //if its the current letter is not equal to the reverse
			return(0);
		}
		ptr1++; ptr2--;//increment of position e.g abdefg, ptr1 will now be b and ptr2 will now be f , (90001[ptr1] vs 90007[ptr2])
	}
	return(1);
}
/* write your code here  
int palindrome(char *str){
	int y,i;
	y=strlen(str); //get string's length
for(i=0;str[i]!='\0';i++){
	if(str[i]==str[y-1]) //compare from the back
		y--;
	else 
		return 0;
}
return 1;


}*/