#include <stdio.h>
int main(){
	int x=4,y=6,z;
//	printf("Enter two number:");
//	scanf("%d%d",&x,&y);
	z=x;
	x=y;
	y=z;
	printf("The value of x after swap is : %d\n",x);
	printf("The value of y after swap is : %d",y);
	return 0;
	
}
