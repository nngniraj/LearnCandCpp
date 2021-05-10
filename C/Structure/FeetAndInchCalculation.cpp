// To calculate any two distance using feet and inch.(1feet=12 inch)

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct Distance
{
	int feet;
	int inch;
}
d1, d2, sum;
int main()
{
	// For d1
	printf("\n----------First Distance----------\n");
	printf("Enter Feet:\n");
	scanf("%d",&d1.feet);
	printf("Enter Inch:\n");
	scanf("%d",&d1.inch);
	//For d2
	printf("\n----------Second Distance----------\n");
	printf("Enter Feet:\n");
	scanf("%d",&d2.feet);
	printf("Enter Inch:\n");
	scanf("%d",&d2.inch);
	//Calculation
	sum.feet=d1.feet+d2.feet;
	sum.inch=d1.inch+d2.inch;
	
	while(sum.inch>=12)
	{
		++sum.feet;
		sum.inch-=12;
	}
	printf("\n%d\'%d\"",sum.feet,sum.inch);
	getch();
	return 0;
}
