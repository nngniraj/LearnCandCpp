#include<stdio.h>
void display(float age[5])
{
	int i;
	for(i=0;i<4;i++)
	{
		printf("%.2f\n",age[i]);
	}
	
}
int main()
{
	float age[5]={2,3,4,5,6};
	display(age);
}
