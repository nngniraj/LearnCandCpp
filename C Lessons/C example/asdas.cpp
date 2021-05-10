#include<stdio.h>
int addnum(int a,int b); //function prototype
int main()
{
	int x,y,c,d,sum;
	printf("Enter the value of x and y :");
	scanf("%d%d",&x,&y);
	printf("Enter the value of c and d:");
	scanf("%d%d",&c,&d);
	
	sum=addnum(x,y); //function call
	printf("Sum=%d\n",sum);
	sum=addnum(c,d);
	printf("Sum2:%d",sum);
}
int addnum(int a,int b) //function defination
{
	int result;
	result=a+b;
	return result;
	
}
