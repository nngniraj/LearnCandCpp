#include<stdio.h>
void display(int age);
int main()
{
	int age[]={35,56,76,88};
	display(age[2]);
	return 0;
}
void display(int age)
{
	printf("age=%d",age);
}
