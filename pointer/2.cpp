#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	char str1[50], str2[50],*p1,*p2,check=0;
	scanf("%s", str1);
	scanf("%s", str2);
	p1 = str1;
	p2 = str2;
	
	while (*p1 != '\0' || *p2 != '\0') {
		while (*p1 != *p1 + 1) {	p1++; }
		while (*p2 != *p2 + 1) {	p2++; }
		if (*p1 == *p2) {
				printf("%c = %c ", *p1, *p2);
		}
		else {
				check = 1;
				break;
			}
		p1++;
		p2++;
		}
	
	if (check == 0) {
		printf("\nequal");
	}
	else
		printf("\nnot equal");
	return 0;
}