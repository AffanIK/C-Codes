#include <stdio.h>
int main()
{
	char letter;
	
	printf("Input letter: ", letter);
	scanf("%c", &letter);
	
	switch (letter)
	{
		case 'a':
			printf("%c is vowel",letter);
			break;
		case 'e':
			printf("%c is vowel",letter);
			break;
		case 'i':
			printf("%c is vowel",letter);
			break;
		case 'o':
			printf("%c is vowel",letter);
			break;
		case 'u':
			printf("%c is vowel",letter);
			break;
		default:
			printf("%c is consonant", letter);		
	}
	
}