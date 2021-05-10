#include<stdio.h>
int main()
{
	int a=10,b=3,c;
	c=((a>b)&&(a==b));
	printf("(a>b)&&(a==b)=%d\n",c);
	c=(b<a)||(a==b);
	printf("(a>b)&&(a==b)=%d",c);
}
