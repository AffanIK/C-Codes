#include<stdio.h>
#include<math.h>
#include <stdlib.h>
int main(){
	
	int odd[]={3,5,7,9};
	int i,j;
	for(j=0;j<=3;j++){
	    for(i=1;i<=10;i++){
	        printf("%d * %d = %d\n",odd[j],i,odd[j]*i);}
			printf("**************\n");}
}