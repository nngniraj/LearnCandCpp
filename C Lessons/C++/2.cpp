#include<stdio.h>
void display(int age[])
{
	for(int i=0;i<4;i++)
	printf("%d\n",age[i]);
}
int main()
{
	int arrage[]={1,2,3,4,5};
	display(arrage);
}
