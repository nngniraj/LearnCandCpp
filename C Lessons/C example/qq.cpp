#include <stdio.h>
int main(){
	int x,count,sum=0;
	printf("Enter a positive number");
	scanf("%d",&x);
	for(count=1;count<=x;++count){
		sum +=count;
	}
	printf("sum = %d",sum);
	return 0;
}
