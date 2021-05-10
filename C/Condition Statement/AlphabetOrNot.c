// To check weather the entered value is albhabet or not.

#include<stdio.h>
#include<conio.h>
int main()
{
	
	char alpha;
	printf("Enter Your Value\n");
	scanf("%c",&alpha);
	if((alpha>='a'&&alpha<='z')||(alpha>='A'&&alpha<='Z'))
	{
		printf("It's alphabet.\n");
	}
	else{
		printf("It's not alphabet.\n");
	}
	getch();
	return 0;
}
