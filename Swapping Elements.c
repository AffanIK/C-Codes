#include <stdio.h>
swap(int *vara, int *varb, int *varc)
{
	int temp;
	temp=*vara;
	*vara=*varc;
	*varc=*varb;
	*varb=temp;
}
int main()
{
	int a, b, c;
	printf("Enter a: ");
	scanf("%d", &a);
	printf("Enter b: ");
	scanf("%d", &b);
	printf("Enter c: ");
	scanf("%d", &c);
	
	swap(&a,&b,&c);
	
	printf("a: %d\n", a);
	printf("b: %d\n", b);
	printf("c: %d\n", c);
	
	
}