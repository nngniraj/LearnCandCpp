#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
	int n,*ptr,sum=0,i,*p;
	printf("Enter array size:");
	scanf("%d",&n);
	ptr= (int*)malloc(n*sizeof(int));
	p=ptr;
	printf("Enter no of elements:");
	for(i=1;i<=n;i++)
	{
		scanf("%d",ptr);
		sum+=*ptr;
		ptr++;
	}
	free(ptr);
	
		for(i=1;i<=n;i++)
	{
	   printf("%d\n",*p);
	   p++;
	}
	printf("Sum=%d",sum);
	free(ptr);
	getch();
}
