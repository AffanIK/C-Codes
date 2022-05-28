#include <stdio.h>
int main()
{
	int num[10], numb, i, count=0;
	for(i=0;i<10;i++)
	{
		printf("Enter Number: ");
		scanf("%d", &num[i]);
	}
	
	printf("Enter Number you want to search: ", numb);
	scanf("%d", &numb);
	
	for(i=0;i<=10;i++)
	{
		if(numb==num[i])
			count=count+1;
		else
			continue;
	}
	
	if(count==0)
		printf("Number not found");
	else
		printf("%d occurred %d times.", numb, count);
	
	return 0;
}