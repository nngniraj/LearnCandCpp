#include<stdio.h>
int main()
{
	int c;
	printf("[1].ADD\n");
	printf("[2].Subtract\n");
	printf("Enter your chocie:");
	scanf("%d",&c);
	switch(c)
	{
		case 1:
			   int x,y,z;
			   printf("Enter the value of x and y:");
			   scanf("%d%d",&x,&y);
			   z=x+y;
			   printf("Sum=%d",z);
			   break;
		case 2:
			  printf("Subtract is selected");
			  break;
		default:
			
			printf("enter only 1-2");
	}
	
}
