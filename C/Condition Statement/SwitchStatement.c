// Switch Statement

#include<stdio.h>
#include<conio.h>
int main()
{
	int day;
	printf("Enter Your Choice\n");
	scanf("%d",&day);
	switch(day)
	{
		case 1:
			printf("It's Sunday.\n");
			break;
		
		case 2:
			printf("It's Monday.\n");
			break;
		
		case 3:
			printf("It's Tuesday.\n");
			break;
		
		case 4:
			printf("It's wednesday.\n");
			break;
		
		case 5:
			printf("It's Thusday.\n");
			break;
		
		case 6:
			printf("It's Friday.\n");
			break;
		
		case 7:
			printf("It's Saturday.\n");
			break;
		
		default:
			printf("Enter 1 to 7 only.\n");
	}
	
	getch();
	return 0;
}
