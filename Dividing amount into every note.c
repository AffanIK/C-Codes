#include <stdio.h>
int main()
{
	int amount, fivhun, hun, fifty, twenty, ten, one;
	
	printf("Enter amount: ", amount);
	scanf("%d",  &amount);
	
	fivhun=amount/500;
	amount=amount-(fivhun*500);
	
	hun=amount/100;
	amount=amount-(hun*100); 

	fifty=amount/50;
	amount=amount-(fifty*50);
	
	twenty=amount/20;
	amount=amount-(twenty*20);
	
	ten=amount/10;
	amount=amount-(ten*10);
	
	one=amount/1;
	amount=amount-(one*1);
	
	printf("%d notes of 500 hundred rupees\n %d notes of 100 rupees\n %d notes of 50 rupees\n %d notes of 20 rupees\n %d notes of 10 rupees\n %d notes of 1 rupees",fivhun, hun, fifty, twenty, ten, one);
	
	return 0;
	
}