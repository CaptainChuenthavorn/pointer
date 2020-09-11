#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
char checkPalin(char , char, char, char);
int main() {
	int check = 1;
	char str[50] ;
	char *p,*t;
	scanf("%s", &str);
	p = str;
	t = str;
	while (*p != '\0') {		
	//printf("%c", *p);
		p++;
	}
	p--;
	printf("t= %c\np= %c\n", *t, *p);
	checkPalin(str[0],*p,*t,check);
	if (check == 0)
		printf("\nNot Palindrome");
	else
		printf("\nPalindrome");
	return 0;
}
char checkPalin(char str,char &p, char *t, char check) {
	while (*p >= str) {
		if (*p == *t) {
			printf("%c", *p);
		}
		else {
			check = 0;
			break;
		}
		p--;
		t++;
	}
	return check;
}
