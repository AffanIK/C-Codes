#include <stdio.h>
#include <stdlib.h>
#include<conio.h>
#include<string.h>
#include<Windows.h>

struct airline
{
	char passport[6];
	char name[15];
    char desti[15];
	int seat_num;
	char email[20];
	struct airline *following;
}*begin, *stream;
struct airline *dummy;

void reserve(int x);
void cancel();
void display(); 
void savefile();

void details()
{
	printf("\n\t Enter your passport number:");
	gets(stream->passport);	//stores the input value in the pointer pointed
	fflush(stdin);  
	printf("\n\t Enter your  name: ");
	gets(stream->name);
	fflush(stdin);
	printf("\n\t Enter your email address: ");
	gets(stream->email);
	fflush(stdin);
    printf("\n\t Enter the Destination : ");
    gets(stream->desti);
	fflush(stdin);
}
void display()
{
	stream=begin;
	while (stream)
	{
		printf("\nPassport Number : %s", stream->passport);
		printf("\nName : %s", stream->name);
		printf("\nEmail address: %s", stream->email);
		printf("\nSeat number: A-%d", stream->seat_num);
        printf("\nDestination:%s", stream->desti);
		printf("\n\n************************************************");
		stream=stream->following;
	}
}
void reserve(int x)
{
	stream=begin;
	if(begin==NULL)
	{
		// first user
		begin=stream=(struct airline*)malloc(sizeof(struct airline));
		details();
		stream->following=NULL;
		printf("\n\t Seat booking successful!");
		printf("\n\t your seat number is: Seat A-%d", x);
		stream->seat_num = x;
		return;
	}
	else if(x>5) 
	{
		printf("\n\t\t Seat Full.");
		return;
	}
	else
	{
		// next user
		while (stream->following)
			stream = stream->following;
		stream->following = (struct airline *)malloc(sizeof(struct airline));
		stream = stream->following;
		details();
		stream->following = NULL;
		printf("\n\t Seat booking succesful!");
		printf("\n\t your seat number is: Seat A-%d", x);
		stream->seat_num = x;
		return;
	}
}
int main()
{
	int ch, ch2, ch3, n, i, t,ent, j, w;
	float a,b,ans;
	char name[w][30], place, location;
	int day, month, age;
	ent=10;
	srand((unsigned) time(&t));
	
	printf("\n\n\t\t\t\tVirtual Assistant\t\t\t\n");
	do 
	{
	printf("What do you want to do?: \t\t\t\n\n1.Daily Life Questions\t\t\t\n\n2.Calculator\t\t\t\n\n3.Airline Booking\t\t\t\n\n4.Exit\t\t\t\n\nEnter Choice: ");
	scanf("%d", &ch);
	
	if(ch==1)
	{
		
	}
		else if(ch==2)
	{
	printf("What do you want to do?:\n1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n");
	scanf("%d", &ch2);
		switch (ch2)
		{
		case 1:
			{
				printf("Enter First Number: ");	
				scanf("%f", &a);
				printf("Enter Second Number: ");
				scanf("%f", &b);	
				ans=a+b;
				printf("Answer=%.0f\n\n", ans);
				break;
			}
		case 2:
			{
				printf("Enter First Number: ");
				scanf("%f", &a);
				printf("Enter Second Number: ");
				scanf("%f", &b);	
				ans=a-b;
				printf("Answer=%.0f\n\n", ans);
				break;
			}
		case 3:
			{
				printf("Enter First Number: ");
				scanf("%f", &a);
				printf("Enter Second Number: ");
				scanf("%f", &b);
				ans=a*b;
				printf("Answer=%.0f\n\n", ans);
				break;
			}
		case 4:
			{
				printf("Enter First Number: ");
				scanf("%f", &a);
				printf("Enter Second Number: ");	
				scanf("%f", &b);	
				ans=a/b;
				printf("Answer=%.2f\n\n", ans);
				break;
			}
		default:
			printf("Error");
			break;
		}
	}
	else if(ch==3)
	{
		int ch6;
		begin=stream=NULL;  //structure pointers here are been set to null 
		int num = 1;
		do
		{
			system("cls");
			printf("\n\t\t                   WELCOME TO ONLINE AIRLINE BOOKING SYSTEM                   ");
			printf("\n\n\n\t\t Please enter your choice from below: ");
			printf("\n\n\t\t 1. Reservation");
			printf("\n\n\t\t 2. DISPLAY RECORDS");
			printf("\n\n\t\t 3. EXIT");
			printf("\n\n\t\t FOR QUERIES, CALL 999-999-999");
			printf("\n\n\t\t Enter your choice :");
			scanf("%d", &ch6);
			fflush(stdin);
			system("cls");
			switch (ch6)
			{
				case 1:
					reserve(num);
					num++;
					break;
			
				case 2:
					display();
					break;
			
				case 3:
					goto end;
					break;
			
				default:
					printf("\n\n\t SORRY INVALID CHOICE!");
					printf("\n\n\t PLEASE CHOOSE FROM 1-4");
					printf("\n\n\t Do not forget to chose from 1-4");
			}
		getch();
	}
		while (ch6 != 4);
		end:
		return 0;
		
	}
	
			
	}
	while(ch!=4);
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}