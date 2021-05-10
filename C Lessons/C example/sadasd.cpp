#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
	int n,*ptr,sum=0,i,*p;
	printf("Enter the size of Array");
	scanf("%d",&n);
	ptr=(int*)malloc(n*sizeof(int));
	p=ptr;
	printf("Enter the elements in Array");
	for(i=1;i<=n;i++)
	{
		scanf("%d",ptr);
		sum = sum+*ptr;
		ptr++;
	}
	printf("Array Elements:");
	for(i=1;i<=n;i++)
	{
		printf("%d",*p);
		p++;
	}
	printf("Sum=%d",sum);
	free(ptr);
	getch();

}

