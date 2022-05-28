#include <stdio.h>
int main()
 {
    int a, b, c, i, hcf, lcm, max;

	printf("Enter first number: ");  
	scanf("%d", &a);
	printf("Enter second number: ");  
	scanf("%d", &b);
    printf("Enter third number: ");  
	scanf("%d", &c);
   
   	//CALCULATING HCF
    for(i=1;i<=a||i<=b||i<=c;i++)
	{
   		if(a%i==0 && b%i==0 && c%i==0)
       	hcf = i;
    }

   	printf("HCF = %d\n", hcf);
   	
	//CALCULATING LCM
    
	if(a>b && a>c)
		max=a;
	else if(b>a && b>c)
		max=b;
	else if(c>a && c>b)
		max=c;
		
	while(1)
	{
		if(max%a==0 && max%b==0 && max%c==0)
		{
		printf("LCM = %d", max);
		break;
		}
		else
			++max;
	}	 
	  
   return 0;
}