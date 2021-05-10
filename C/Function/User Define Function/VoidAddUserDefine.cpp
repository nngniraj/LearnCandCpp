// To add any two numbersw using user define function. (Void)

#include<stdio.h>
#include<conio.h>
void addnum(int a, int b);

int main()
{
	int x, y,c,d;
	printf("Enter x:\n");
	scanf("%d",&x);
	printf("Enter y:\n");
	scanf("%d",&y);
	printf("Enter c:\n");
	scanf("%d",&c);
	printf("Enter d:\n");
	scanf("%d",&d);
	addnum(x,y);
	addnum(c,d);
	return 0;
}

void addnum(int a, int b)
{
	int result;
	result=a+b;
	printf("Your result is %d.\n",result);
	
}
