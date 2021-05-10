// To swip any two values using thirdparty.

#include<stdio.h>
#include<conio.h>
int main()
{
	int a, b, temp;
	printf("Enter Value Of a:");
	scanf("%d",&a);
	printf("Enter The Value of b:");
	scanf("%d",&b);
	printf("\n\n\n----------ORGINAL VALUE-----------\n\n");
	printf("The Value of 'a' before swip is %d,\n",a);
	printf("The Value of 'b' before swip is %d,\n",b);
	temp=a;
	a=b;
	b=temp;
	printf("\n\n\n----------SWIPED VALUE-----------\n\n");
	printf("The Value of 'a' after swip is %d,\n",a);
	printf("The Value of 'b' after swip is %d,\n",b);
	getch();
}
