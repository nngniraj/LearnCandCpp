#include<stdio.h>
void display(int age)
{   
     int i;
     for(i=0;i<4;i++)
	printf("%d",age);
}
int main()
{
	int agearr[]={1,2,3,4};
	display(agearr[2]);
	
}
