#include <stdio.h>
int sum(int x)
{
	int i, total, a;
	for(i=0;i<5;i++)
	{
		if(x==0)
			return 0;
		else
			total=x%10+sum(x/10);
	}
		return total;	
}
int main()
{
	int n, a;
	printf("Enter 5 digit number: ");
	scanf("%d", &n);
	if(n>9999 && n<100000)
		{
		a=sum(n);
		printf("Total of %d is %d", n, a);
		}
	else
		printf("Error");
		
}