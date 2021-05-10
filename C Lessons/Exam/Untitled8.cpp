#include<stdio.h>
void display(int age[]);
int main()
{
	int age[]={23,45,65,75};
	display(age);
	return 0;
}
void display(int age[])
{
	int i;
	for(i=0;i<=3;i++)
	{
		printf("Age=%d\n",age[i]);
	}
}
