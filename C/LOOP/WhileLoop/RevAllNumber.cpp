#include<stdio.h>
#include<conio.h>
int main()
{
	int a, num, rev=0;
	printf("Enter Your Numbers:\n");
	scanf("%d",&a);
	while(a>0)
	{
		num=a%10;
		rev=(rev*10)+num;
		a=a/10;
	}
	printf("Your reversed number is %d",rev);
	return 0;
	getch();
}
