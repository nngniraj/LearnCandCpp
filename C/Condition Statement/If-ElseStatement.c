// If-Else Statement

#include<stdio.h>
#include<conio.h>
int main()
{
	int a;
	printf("Enter Your Value:\n");
	scanf("%d",&a);
	if(a>50)
	{
		printf("%d is more than 50.",a);
	}
	else{
		printf("%d is less then 50.",a);
	}
	getch();
	return 0;
}
