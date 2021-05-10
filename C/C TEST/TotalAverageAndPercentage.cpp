// Basic Programming, 4. Calculate total, average and percentage from entered marks

#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,c,d,e,avg,per;
	printf("Enter Your Marks For Calculation.\n\n");
	printf("Marks of English:\n");
	scanf("%d",&a);
	printf("Marks of Computer:\n");
	scanf("%d",&b);
	printf("Marks of Maths:\n");
	scanf("%d",&c);
	printf("Marks of Account:\n");
	scanf("%d",&d);
	printf("Marks of Economics:\n");
	scanf("%d",&e);
	avg=(a+b+c+d+e)/5;
	printf("\n\n----------Your Result----------");
	printf("\n\nTotal of all subjects is %d.\n\n",a+b+c+d+e);
	printf("Average from all subjects is %d.\n\n",avg);
	printf("Percentage of all subjects is %d percent.",avg/100);
	getch();
	return 0;
}
