#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,c,d,e, sum,sub,mul,div,mol;
	printf("Enter First Number:");
	scanf("%d",&a);
	printf("Enter Second Number:");
	scanf("%d",&b);
	div=a/b;
	mol=a%b;
	printf("Your Divided Number is:%d\n",div);
	printf("Your Modulus Division is:%d\n",mol);
	getch();
	return 0;
}
