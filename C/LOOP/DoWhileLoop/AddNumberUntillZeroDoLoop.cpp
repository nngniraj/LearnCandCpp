// To add numbers until user enters zero '0'.

#include<stdio.h>
#include<conio.h>
int main()
{
	int a, sum=0;
	do
	{
		printf("Your number:\n");
		scanf("%d",&a);
		sum+=a;
	}
	while(a!=0);
	printf("Your sum is %d",sum);
	getch();
	return 0;
}
