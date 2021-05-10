#include<stdio.h>
int main()
{
	int a=4,b=6,c=7,result;
	result=(a==b)&&(a>c);
	
	printf("(a==b)&&(a>c)=%d\n",result);
	result=!(a>b);
	printf("%d",result);
	
	//printf("(%d!=%d)=%d",a,b,a!=b);

}
