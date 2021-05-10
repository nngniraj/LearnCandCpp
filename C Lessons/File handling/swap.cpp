#include<stdio.h>
int main()
{
	int x,y,z,temp;
//	printf("Enter the value of x:");
//	scanf("%d",&x);
//	printf("Enter the value of y:");
//	scanf("%d",&y);
	printf("Enter the value of x,y and z:\n");
	scanf("%d%d%d",&x,&y,&z);
    temp=x;
    x=z;
    z=y;
    y=temp;
    printf("The value of x after swap is:%d\n",x);
    printf("The value of  y after swap is:%d\n",y);
    printf("The value of z after swap is :%d",z);
    return 0;
}
