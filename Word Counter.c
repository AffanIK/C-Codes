#include <stdio.h>
#include <string.h>
int main()
{
    char s[1000],*p;  
    int words=0; 
    printf("Enter string: ");
    gets(s);

    p=s;
 	while(*p)  
    {
    	if(*p++==32)
           words++;
	} 
	
    if(strlen(s)>0)
    {
	words++;
    printf("Words = %d",words);
	}
	
    return 0;  
} 