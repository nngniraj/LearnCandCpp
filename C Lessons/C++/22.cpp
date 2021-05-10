#include<stdio.h>
void display(int age[2][2])
{
	for(int i=0;i<2;i++)
	for(int j=0;j<2;j++)
	printf("%d\n",age[i][j]);
}
int main()
{
	int arrage[2][2]={1,2,3,4};
	display(arrage);
}
