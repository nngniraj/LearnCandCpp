#include<stdio.h>
int main()
{
	int n;
	printf("Enter number between 1-2 only");
	scanf("%d",&n);
	switch(n)
	{
		case 'a': 
		      printf("Today is Sunday");
		      break;
	    case 'b':
	    	printf("Today is monday");
	         break;
	         
	         default:
	           printf("Enter 1-2 value");
	}
	return 0;
	
}
