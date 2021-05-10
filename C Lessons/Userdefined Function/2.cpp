#include<stdio.h>
void area();

int main()
{
	area();
}

void area()
{
	int r;
	float area;
	printf("Enter radius:");
	scanf("%d",&r);
	area=3.14*r*r;
	printf("Area:%.2f",area);
}
