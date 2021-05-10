// To display numbers from 1 to 100.

#include<stdio.h>
#include<conio.h>
int main()
{
	int a;
	
	printf("All numbers from 1 to 100 are:\n\n");
	for(a=1; a<=100; ++a)
	{
		printf("%d\t",a);
	}
	
	getch();
	return 0;
}
