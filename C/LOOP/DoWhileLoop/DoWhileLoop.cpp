// Do While

#include<stdio.h>
#include<conio.h>
int main()
{
	int n;
	printf("Your Number Please:\n");
	scanf("%d",&n);
	do{
		printf("%d ",n);
		n=n+2;
		}
		while(n<50);
		
	getch();
	return 0;
}
