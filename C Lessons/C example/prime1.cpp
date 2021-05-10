#include<stdio.h>
int main()
{
	
    int i,num;
	printf("\n Enter number:"); 
		scanf("%d",&num); 
		for(i=2;i<num;i++) 
		{ 
		if(num%i== 0) 
		{ 
		printf("\n Not a prime number.\n"); 
		break; //Takes control out of for loop 
		} 
		} 
		if(i==num) 
		{
		
		printf("\n Prime number.\n"); 
			}
		
	}
