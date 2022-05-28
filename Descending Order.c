#include <stdio.h>
int main()
{
	float number[30];
    int i, j, a, n;
    
    printf("Enter the numbers \n");
    for (i = 0; i < 5; ++i)
	{
	    scanf("%f", &number[i]);
	}
    
    for (i = 0; i < 5; i++) 
    {
        for (j = i + 1; j < 5; j++) 
        {
            if (number[i] < number[j]) 
            {
                a = number[i];
                number[i] = number[j];
                number[j] = a;
            }
        }
    }
 
    printf("The numbers arranged in descending order are given below\n");
 
    for (i = 0; i < 5; i++) 
    {
        printf("%.2f\n", number[i]);
    }
 
}