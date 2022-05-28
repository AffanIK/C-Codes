#include <stdio.h>
int main()
{
	int det(int a[2][2])
	{
		int determinent;
		determinent=a[0][0]*a[1][1]-a[1][0]*a[0][1];
		
		return determinent;
	}
	
	int a[2][2];
	int b, c, ans;
	
	printf("Enter elements of your matrix: \n");
	for(b=0; b<2; b++)
	for(c=0; c<2; c++)
	scanf("%d", &a[b][c]);
	
	printf("The matrix you want is : \n");
	for(b=0; b<2; b++)
	{
		for(c=0; c<2; c++)
		{	
			printf("%d\t", a[b][c]);	
		}	
		printf("\n");
	}
	
	ans=det(a[b][c]);
	printf("The determinent of your matrix is %d", ans);
	
	return 0;
}