#include<stdio.h>
void display(int age[][3])
{
for(int i=0;i<2;i++)
for(int j=0;j<3;j++)
	printf("%d,",age[i][j]);
}
int main()
{
	int x[][3]={1,2,3,4,5,5};
	display(x);
	return 0;
}
