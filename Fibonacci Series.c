#include<stdio.h>    
void fibseq(int n)
{    
    static int n1=0,n2=1,n3;    
    if(n>0)
	{    
        n3=n1+n2;    
        n1=n2;    
        n2=n3;    
        printf("%d ",n3);    
        fibseq(n-1);    
    }    
}    
int main()
{    
    int n;    
    printf("Enter the number of elements: ");    
    scanf("%d",&n);    
    printf("Fibonacci Series: ");    
    printf("%d %d ",0,1);//First 2 numbers are not recieved so we pre-print it    
    fibseq(n-2);    
  return 0;  
 }    