#include <stdio.h>
int main(){
	int x,y,temp;
	printf("Enter the value of x: ");
	scanf("%d",&x);
	printf("Enter the value of y: ");
	scanf("%d",&y);
	
	temp=x;
	x=y;
	y=temp;
	
	printf("The swap value of x is = %d",x);
	printf("The swap value of y is = %d",y);
	return 0;
}
