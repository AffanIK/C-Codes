#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
void addbook();
void disbook();
void authbook();
void bookfind();
void totbook();
void accbook();

struct lib
{
	int accno;
	char bktitle[20];
	char author[20];
	int cost;	
}b[1000];
int c;
void addbook()
{
	if(c==10)
	{
		printf("no more Space in the library");
	}
	
	
	printf("\t\t\tEnter the Details of the book\n");
	printf("Enter Accession Number of Book:");
	scanf("%d", &b[c].accno);
	fflush(stdin);
	printf("Enter Book title:");
	gets(b[c].bktitle);//gets function allows us to take in a string
	fflush(stdin);
	printf("Enter Author Name: ");
	gets(b[c].author);
	fflush(stdin);
	printf("Enter the cost of the book:");
	scanf("%d", &b[c].cost);
	fflush(stdin);
	c++;
}
void disbook()
{
	int i;
	printf("\nDetail of %d books in library\n", c);
	for(i=0;i<c;i++)
	{
		printf("Accession number of the book is: %d\n",b[i].accno);
	    printf("Title of the book is:%s\n",b[i].bktitle);
	    printf("Author of the book is:%s\n",b[i].author);
	    printf("Price of the book is:%d\n",b[i].cost);
	    printf("\n");
	 
	}		
}
void authbook()
{
	int i, cont=0;
	char name[20];
	printf("Enter Author Name: ");
	scanf("%s", &name);
	fflush(stdin);
	for(i=0;i<c;i++)
	{
		if(name==b[i].author)
		{
			cont=cont+1;
			printf("%d\n%s\n%s\n%d\n", b[i].accno, b[i].bktitle, b[i].author, b[i].cost);	
		}
	}
	if(cont==0)
		printf("No book of this author\n");
}
void bookfind()
{
	int i;
	char book[30];
	printf("Enter book title: ");
	gets(book);
	for(i=0;i<c;i++)
	{
		if(book==b[i].bktitle)
			printf("%d\n%s\n%s\n%d\n", b[i].accno, b[i].bktitle, b[i].author, b[i].cost);
	}
}
void totbook()
{
	printf("\nTotal number of books are %d\n", c);
}
void accbook()
{
	int i;
	for(i=0;i<c;i++)
	{
		printf("Accession Number: %d\nBook Title: %s\nBook Author: %s\nBook Cost: %d\n", b[i].accno, b[i].bktitle, b[i].author, b[i].cost);
	}
}
int main()
{
	int ch;
	do
	{
	printf("1.Add Book Information\n");
	printf("2.Display Book Information\n");
	printf("3.List all books of given author\n");
	printf("4.List the tile of a specified book\n");
	printf("5.List the count of books in the library\n");
	printf("6.List the books in order of accession number\n");
	printf("7.Exit\n");
	scanf("%d", &ch);

	switch (ch)
	{
		case 1:
			addbook();
			getch();
			break;
		
		case 2:
			disbook();
			getch();
			break;
		
		case 3:
			authbook();
			getch();
			break;
		
		case 4:
			bookfind();
			getch();
			break;
		
		case 5:
			totbook();
			getch();
			break;
			
		case 6:
			accbook();
			getch();
			break;
			
		default:
			printf("Error");
	}	
	}
	while(ch!=7);
	
}