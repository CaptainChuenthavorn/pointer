/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	char str[50], * p;
	printf("Program that printf only letter and change lower to capital or change capital to lower \n");
	printf("Enter string  : ");
	scanf("%[^\n]s", str);
	p = str;
	printf("\n\nThe result is : ");
	while (*p != '\0')
	{

		if ((*p >= 'a' && *p <= 'z') || (*p >= 'A' && *p <= 'Z'))
		{
			//method change lower to capital letter
			if (*p >= 'a' && *p <= 'z') {
				*p = *p - 'b' + 'B';
			}
			//method change capital to lower letter
			else if (*p >= 'A' && *p <= 'Z') {
				*p = *p - 'A' + 'a';
			}
			printf("%c", *p);
			p++;
		}
		else p++;
	}

	return 0;
}*/