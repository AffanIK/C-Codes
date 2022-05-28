#include<stdio.h>
//Sorting for 10 Values
int sort(int a[10])
{
 int b, j, temp;
 for(b=0;b<10;b++)
 {
  for(j=b+1;j<10;j++)
  {
   if(a[b]>a[j])
   {
    temp = a[b];
    a[b] = a[j];
    a[j] = temp;
   }
  }
 }
}
int main()
{
	int a[10], i;
 
	for(i=0;i<10;i++)
	{
	printf("a[%d]=",i+1);
	scanf("%d", &a[i]);
	} 
	sort(a);
 	
	printf("Array in ascending order is:\n");
	for(i=0;i<10;i++)
	{
	  printf("%d\t", a[i]);
	}
}
