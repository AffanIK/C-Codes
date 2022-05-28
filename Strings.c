#include <stdio.h>
int main()
{
	char fn, ln;
	
	printf("Enter First Name: ");
	scanf("%c", &fn);
	printf("Enter Last Name: ");
	scanf(" %c", &ln);
	
	printf("%c %c", fn,ln);
	
}