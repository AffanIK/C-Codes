#include <stdio.h>
float avg(float f, float g, float h)
{
	float avg=0;
	avg=(h+g+f)/3;
	
	return avg;
}
float perc(float x, float y, float z)
{
	float per=0;
	per=((x+y+z)/300)*100;
	return per;
}

int main()
{
	int m1, m2, m3;
	float a=0;
	float p=0;
	printf("Enter marks of Subject 1:");
	scanf("%d", &m1);
	printf("Enter marks of Subject 2:");
	scanf("%d", &m2);
	printf("Enter marks of Subject 3:");
	scanf("%d", &m3);	
	
	a=avg(m1, m2, m3);
	p=perc(m1, m2, m3);
	
	printf("Average Marks of Student are: %.2f\n", a);
	printf("Percentage of student is: %.2f", p);
	
	return 0;
}