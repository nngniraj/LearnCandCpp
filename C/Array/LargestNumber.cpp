// To find the largest element of an array.

#include<stdio.h>
#include<conio.h>
int main()
{
	int lrg[5],i,num;
	
	printf("Among how many do you want ?\n");
	scanf("%d",&num);
	for(i=0;i<num;i++)
	{
		printf("Enter number %d:\n",i+1);
		scanf("%d",&lrg[i]);
	}
	
	for(int j=1;j<num;j++)
	{
		if(lrg[0]<lrg[j])
		{
			lrg[0]=lrg[j];
		}
		
	}
	printf("\n\nLargest number among given numbers is %d.",lrg[0]);
	return 0;
}
