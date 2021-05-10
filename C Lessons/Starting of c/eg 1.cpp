#include <stdio.h>
int main()
{
	int x,y,z;
    printf("enter any number");
    scanf("%d%d",&x,&y);
    z=x;
    x=y;
    y=z;
	printf("the value of x after swap:%d\n",x);
	printf("the value of y after swap:%d",y);
return 0;
}
