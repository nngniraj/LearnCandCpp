/*To reverse the number  using while loop.

rev=(rev*10)+(num%10)
num=num/10;

*/
#include<stdio.h>
#include<conio.h>
int main()
{
	int a, b, c;
	printf("Enter Your Number:\n");
	scanf("%d",&c);
	while(a>=c)
	{
		while(b<=a)
		{
			printf("%d\n",a);
			a--;
		}
	}
	
	getch ();
	return 0;
}
