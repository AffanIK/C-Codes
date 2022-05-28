#include <stdio.h>
void sort(int* ptr)
{
    int i, j, t, ch;
	
	for(i=0;i<20;i++)
	{
      	for(j=i+1;j<20;j++)
		{
       	    if(*(ptr+j)>*(ptr+i))
			{
       	       	t=*(ptr+i);
       	       	*(ptr+i)=*(ptr+j);
       	       	*(ptr+j)=t;
  	        }
        }
   	} 
    	
	printf("Second Highest number is: %d ", *(ptr + 1));
}	

int main()
{
    int i;
    int arr[20];
    for(i=0;i<20;i++)
    {
    	printf("Element[%d]: ", i+1);
    	scanf("%d", &arr[i]);
	}
    sort(arr); 
   
    return 0;
}