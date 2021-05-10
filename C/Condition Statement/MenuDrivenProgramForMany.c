/* To create a menu driven program which includes:
	1. Even or Odd.
	2. Greatest number among two.
	3. Switch Two Value without using third variable.
	4. Alphabet or not.
*/

#include<stdio.h>
#include<conio.h>
int main()
{
	int num1, num2;
	char choice;
	
	printf("-----MENUE-----\n");
	printf("\t A.Alphabet or not.\n");
	printf("\t E.Even or Odd\n");
	printf("\t G.Greatest number among two.\n");
	printf("\tEnter Your Choice:\n");
	choice=getche();
	printf("\n\tEnter num1:\n");
	scanf("%d",&num1);
	printf("\n\tEnter num2:\n");
	scanf("%d",&num2);
	
	switch(num1,num2)
	{
		case 1:
			//int num1, num2;
			num1=num2%2;
			if((choice=='E'||choice=='e')(b==0))
			{
				printf("\n\tEnter num1:\n");
				scanf("%d",&num1);
				printf("\n\tEnter num2:\n");
				scanf("%d",&num2);
		
				printf("\t\n\n----------Your Result----------\n\n");
				printf("%d+%d=%d",num1,num2,num1+num2);
			}
		break;
		
	}
	getch();
	return 0;
}
