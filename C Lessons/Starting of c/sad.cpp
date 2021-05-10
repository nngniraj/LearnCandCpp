#include<stdio.h>
int main(){
	int arr[]={1,2,3,4,5},i;
	int *p =arr;
	for(i=0;i<5;++i)
	{
		printf("%d",*p);
		p++;
	}
	return 0;
}
