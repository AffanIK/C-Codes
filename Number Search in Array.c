#include<stdio.h>

int search (int num[], int s,int n)
{
	static int k=0;
	
	if(n!=10)
	{
	
		if(num[n]==s)
		{
			k=k+1;
		}
		n=n+1;
		search(num,s,n);
	}
	return k;
}
int main()
{
	int num[10],k,i,s,n=0;
	
	printf("\n");
	for(i=0;i<10;i++)
	{
		printf("Enter the %d element of your array  : ",i+1);
		scanf("%d",&num[i]);
	}
	
	printf("\nEnter the number you want to search : ");
	scanf("%d",&s);
	
	k=search(num,s,n);

	if(k<=0)
	{
		printf("No , %d does not exist in your array",s);
	}
	else
	{
		printf("Yes , %d exist in your array",s);
	}
	printf("\nYour array is :   ");
	for(i=0;i<10;i++)
	{
		printf("%d\t",num[i]);
	}
	return 0;
}
