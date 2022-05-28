#include <stdio.h>
#include <string.h>
int main()
{
	char word[30];
	int a, size;
	int flag = 0;
	
	printf(" Enter a word: ");
	scanf("%s", word);
	
	size= strlen(word);
	
	for(a=0; a<size; a++)
	{
		if(word[a] != word[size-a-1])
		{
			flag = 1;
		}
	}
		if(flag)
		{
			printf("%s is not a palindrome", word);
		}
		else
		{
			printf("%s is a palindrome", word);
		}
	return 0;

}