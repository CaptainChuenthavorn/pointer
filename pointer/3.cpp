#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	char str[50], * p;
	scanf("%[^\n]s", str);
	p = str;
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
}