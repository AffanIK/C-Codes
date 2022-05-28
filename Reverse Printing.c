#include <stdio.h>
int main()
{
	char line[80], rev[80];
	int i, ent=10;
	int count=0;
	
	printf("Enter your line: \n");
	for(i=0;i<80;i++)
	{
		scanf("%c", &line[i]);
		rev[i]=line[i];
		if(line[i]==ent)
			break;
		else
			count=count+1;
	}	
	
	printf("Your line backwards is: \n");
	
	for(i=count;i>=0;i--)
	{   
		printf("%c", rev[i]);
	}
	
	return 0;
}