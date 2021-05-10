#include<stdio.h>
int main(){
	int x,y,z;
printf("Enter the value of x And y: ");
scanf("%d%d",&x,&y);
	x=y;
	y=z;
	z=x;
	printf("the value of x after swap is:%d\n",x);
	printf("the value of y after swap is:%d",y);
	
	return 0;

}
