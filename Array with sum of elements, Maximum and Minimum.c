#include <stdio.h>
int display(int array[], int* sum, int* max, int* min) 
{
	int j;
	*max=0;
	*min=1000;
	*sum=0;
	for(j=0;j<9;j++)
	{
		*sum=*sum+array[j];		
		if(array[j]>*max)
			*max=array[j];
		else if(array[j]<*min)
			*min=array[j];
	}	
}
int main()
{
	int array[9],i, max, min, sum;
	for(i=0;i<10;i++)
	{
	printf("Enter Array Element[%d]: ", i+1);
	scanf("%d", &array[i]);
	}
	display(array, &sum, &max, &min);
	printf("The Total Sum is %d\nThe Maximum Value is %d\nThe Minimum Value is %d\n", sum, max, min);
}