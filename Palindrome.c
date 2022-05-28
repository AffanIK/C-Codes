#include <stdio.h>
#include <string.h>
int main()
{
	char integer[5];
	int a, size;
	int flag = 0;
	
	printf(" Enter a 5 digit positive integer: ");
	scanf("%s", integer);
	
	size= strlen(integer);
	
	if(size>4)
	{
			for(a=0; a<size; a++)
		{
			if(integer[a] != integer[size-a-1])
			{
				flag = 1;
			}
		}
			if(flag)
			{
				printf("%s is not a palindrome", integer);
			}
			else
			{
				printf("%s is a palindrome", integer);
			}
	}
	else
		printf("Error! Invalid input. Please try again.");		
	
	return 0;

}
