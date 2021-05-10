#include<stdio.h>
void displayage(int age);
int main()
{
	int age[]={25,46,78,98};
	displayage(age[2]);
	return 0;
	
}
void displayage(int age)
{
	printf("%d",age);
}
