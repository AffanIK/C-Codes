#include <stdio.h>
void sort(int n, int* ptr)
{
    int i, j, t, ch;
	
	printf("What do you want to do?\n1.Asscending\n2.Descending");
	scanf("%d", &ch);
	if(ch==1)
	{
    	for(i=0;i<n;i++)
		{
       	for(j=i+1;j<n;j++)
			{
       	    if(*(ptr+j)<*(ptr+i))
			{
       	        t=*(ptr+i);
       	        *(ptr+i)=*(ptr+j);
       	        *(ptr+j)=t;
            }
        }
    } 
    	for (i=0;i<n;i++)
		{
    	    printf("%d ", *(ptr + i));
		}
	}
	else if(ch==2)
	{
		for(i=0;i<n;i++)
		{
       		for(j=i+1;j<n;j++)
			{
       	    	if(*(ptr+j)>*(ptr+i))
				{
       	       	 	t=*(ptr+i);
       	       		 *(ptr+i)=*(ptr+j);
       	       		 *(ptr+j)=t;
  	           }
        	}
   		} 
    	for (i=0;i<n;i++)
		{
    	    printf("%d ", *(ptr + i));
		}	
	}	
}
int main()
{
    int n, i;
    int arr[100];
    printf("How many elements ?: ");
    scanf("%d", &n);
    for(i=0;i<n;i++)
    {
    	printf("Element[%d]: ", i);
    	scanf("%d", &arr[i]);
	}
    sort(n, arr); 
   
    return 0;
}