// To add any two numbersw using user define function. (Int)

#include<stdio.h>
#include<conio.h>
int addnum(int a, int b);

int main()
{
	int x, y, sum;
	printf("Enter x:\n");
	scanf("%d",&x);
	printf("Enter y:\n");
	scanf("%d",&y);
	sum=addnum(x,y);
	printf("Sum=%d",sum);
	getch();
}
int addnum(int a, int b)
{
	int result;
	result=a+b;
	return result;
}
