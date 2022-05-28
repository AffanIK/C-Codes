#include<stdio.h>
int main(){
	int num1,num2,num3,num4,num5,num6,num7,num8,num9,r1,r2,r3,r4,r5,r6,r7,r8,sum;
	printf("Enter number: \n");
	scanf("%d",&num1);
	
	if(num1<=99 && num1>=0)
	{
	num2 = num1/2;
	r1 = num1%2;
	num3 = num2/2;
	r2 = num2%2;
	num4 = num3/2;
	r3= num3%2;
	num5 = num4/2;
	r4 = num4%2;
	num6 = num5/2;
	r5 = num5%2;
	num7 = num6/2;
	r6 = num6%2;
	num8 = num7/2;
	r7 = num7%2;
	r8 = num8%2;
	printf("the binary equivalent is %d%d%d%d%d%d%d%d\n",r8,r7,r6,r5,r4,r3,r2,r1);
		if (r8==1)
		    r8 = 128;
	    else
			r8 = 0;
	 
	    if (r7==1)
		    r7 = 64;
	    else	
			r8 = 0;
	 
	    if (r6==1)
		    r6 = 32;
	    else
			r8 = 0;
	 
	    if (r5==1)
		    r5 = 16;
	    else
			r8 = 0;
	 
	    if (r4==1)
		    r4 = 8;
	    else
			r8 = 0;
	 
	    if (r3==1)
		    r3 = 4;
	    else
			r8 = 0;
	 
	    if (r2==1)
		    r2 = 2;
	    else
			r8 = 0;
	 
	    if (r1==1)
  		    r1 = 1;
	    else 
			r8 = 0;
     
	    sum = r1 + r2 + r3 + r4 + r5 + r6 + r7 + r8;
	    printf("The decimal equivalent of the above binary is %d\n",sum);
	
	    if (num1==sum)
		    printf("Hurrah!! Your program is correct");
	    else
		    printf("Ooops Your program is incorrect");}
	else
		printf("You must enter a 2 digit positive integer");
	
	return 0;
	
}
