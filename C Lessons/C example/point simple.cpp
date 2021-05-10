#include<stdio.h>
int main(){
	int *p;
	int c=100;
	p=&c;
	printf("%d\n",p);
	c=11;
	printf("%u",*p);
}
