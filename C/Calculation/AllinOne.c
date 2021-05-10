#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,c,d,e, sum,sub,mul,div,mol;
	printf("Enter First Number:");
	scanf("%d",&a);
	printf("Enter Second Number:");
	scanf("%d",&b);
	sum=a+b;
	sub=a-b;
	mul=a*b;
	div=a/b;
	mol=a%b;
	printf("Your Added Number is:%d\n",sum);
	printf("Your Subtracted Number is:%d\n",sub);
	printf("Your Multiplied Number is:%d\n",mul);
	printf("Your Divided Number is:%d\n",div);
	printf("Your Modulus Division is:%d\n",mol);
	getch();
	return 0;
}
