#include <stdio.h>
int increment(int arr[], int x)
{
	int b[100], j;
	for(j=0;j<x;j++)
	{
		b[j]=arr[j]+2;
	}	
	
	printf("\nAfter Increment, Array Elements are: \n");
	for(j=0;j<x;j++)
	{
		printf("Array Element[%d]: %d  \n", j+1, b[j]);
	}	
}
int main()
{
	int arr[100], n, i;
	printf("How many Elements will you insert?: \n");
	scanf("%d", &n);
	
	for(i=0;i<n;i++)
	{
		printf("Enter Elemnt[%d]: ", i+1);
		scanf("%d", &arr[i]);
	}
	
	increment(arr, n);

}