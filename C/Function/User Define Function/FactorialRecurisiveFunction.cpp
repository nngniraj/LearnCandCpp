// To print sum of "n" factorial number using recursive function.


#include<stdio.h>
#include<conio.h>
int mul(int n);
int main()
{
	int number, result;
	printf("Enter a positive integer:\n");
	scanf("%d",&number);
	result=mul(number);
	printf("sum is %d", result);
	return 0;
	getch();
	return 0;
}

int mul(int num)
{
	if (num!=1)
		return num*mul(num-1);
	else
		return num;
}
