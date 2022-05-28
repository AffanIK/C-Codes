#include <stdio.h>
struct saydate
{
	int date;
	int month;
	int year;
};
struct saydate d1, d2;
int main()
{
	//First Date
	printf("Enter First date: ");
	scanf("%d", &d1.date);
	printf("Enter First Month: ");
	scanf("%d", &d1.month);
	printf("Enter First Year: ");
	scanf("%d", &d1.year);
	
	//Second date
	printf("Enter Second date: ");
	scanf("%d", &d2.date);
	printf("Enter Second Month: ");
	scanf("%d", &d2.month);
	printf("Enter Second Year: ");
	scanf("%d", &d2.year);
	
	if(d1.date==d2.date)
	{
		if(d1.month==d2.month)
		{
			if(d1.year==d2.year)
				printf("Equal");
			else
				printf("Unequal");
		}
		else
			printf("Unequal");
	}
	else
		printf("Unequal");
}