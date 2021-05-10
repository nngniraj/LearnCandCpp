#include<stdio.h>
void area();
int main()
{
	area();
}
void area()
{
	int radius;
	float a_rea;
	printf("Enter the vlaue of radius:");
	scanf("%d",&radius);
	a_rea=3.14*radius*radius;
	printf("Area:%.2f",a_rea);
}
