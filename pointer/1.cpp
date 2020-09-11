#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int check = 1;
	char str[50];
	char* p, * t;
	scanf("%s", &str);
	p = str;
	t = str;
	while (*p != '\0') {
		//printf("%c", *p);
		if (*p >= 'A' && *p <= 'Z') {
			*p = *p - 'A' + 'a';
			printf("%c", *p);
		}
		p++;
	}
	p--;
	
	while (p >= str) {	
		if (*p == *t) {
			printf("%c = %c\n", *p,*t);
		}
		else {
			printf("%c != %c\n",*t,*p);
			check = 0;
			break;
		}
		p--;
		t++;
	}
	if (check == 0)
		printf("\nNot Palindrome");
	else
		printf("\nPalindrome");
	return 0;
}