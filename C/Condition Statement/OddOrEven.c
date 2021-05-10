// To check if the entered value is even or  odd.

#include<stdio.h>
#include<conio.h>
int main()
{
	int a, b;
	printf("Enter Your Value:\n");
	scanf("%d",&a);
	b=a%2;
	if(b==0)
	{
		printf("\nYour number '%d' is even.",a);
	}
	else{
		printf("\nYour number '%d' is odd.",a);
	}
	getch();
	return 0;
}
