// Basic Programming, 5. Calculate Simple Interest.

#include<stdio.h>
#include<conio.h>
int main()
{
	int p,t,r,si;
	printf("To calculate Simple Interest:\n\n");
	printf("Enter Price:\n");
	scanf("%d",&p);
	printf("Enter Time:\n");
	scanf("%d",&t);
	printf("Enter Rate of Interest:\n");
	scanf("%d",&r);
	si=((p*t*r)/100);
	printf("\n\nSimple Intrest is %d.",si);
	
	getch();
	return 0;
}
