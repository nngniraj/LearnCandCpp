// To print sum of "n" natural number using recursive function.


#include<stdio.h>
#include<conio.h>
int sum(int n);
int main()
{
	int number, result;
	printf("Enter a positive integer:\n");
	scanf("%d",&number);
	result=sum(number);
	printf("sum is %d", result);
	return 0;
	getch();
	return 0;
}
int sum(int num)
{
	if (num!=0)
		return num+sum(num-1);
	else
		return num;
}
