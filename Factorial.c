#include <stdio.h>
int fact(int x)
{
	int facto=1;
	if(x==0)
		return 1;
	else
		facto=x*fact(x-1);
		
	return facto;
}
int main()
{
	int n, a;
	printf("Enter Number: ");
	scanf("%d", &n);
	a=fact(n);
	printf("Factorial of %d is %d", n, a);
}