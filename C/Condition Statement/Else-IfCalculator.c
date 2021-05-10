// Calculator with else-if function.

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
	int num1, num2;
	char choice;
	while(1)
	{
		printf("\n\t---------MENUE---------\n");
		printf("\t\t A.Add\n");
		printf("\t\t S.SUB\n");
		printf("\t\t D.DIV\n");
		printf("\t\t M.MUL\n");
		printf("\t\t O.MOD\n");
		printf("\t\t E.Exit\n");
		printf("\n\tEnter Your Choice:\n");
		choice=getche();
	
	if(choice=='A'||choice=='a'||choice=='+')
	{
		printf("\n\tEnter num1:\n");
		scanf("%d",&num1);
		printf("\n\tEnter num2:\n");
		scanf("%d",&num2);
		
		printf("\t\n\n----------Your Result----------\n\n");
		printf("%d+%d=%d",num1,num2,num1+num2);
	}
	else if(choice=='S'||choice=='s'||choice=='-')
	{
		printf("\n\tEnter num1:\n");
		scanf("%d",&num1);
		printf("\n\tEnter num2:\n");
		scanf("%d",&num2);
	
		printf("\t\n\n----------Your Result----------\n\n");
		printf("%d-%d=%d",num1,num2,num1-num2);
	}
	else if(choice=='D'||choice=='d'||choice=='/')
	{
		printf("\n\tEnter num1:\n");
		scanf("%d",&num1);
		printf("\n\tEnter num2:\n");
		scanf("%d",&num2);
	
		printf("\t\n\n----------Your Result----------\n\n");
		printf("%d/%d=%d",num1,num2,num1/num2);
	}
	else if(choice=='M'||choice=='m'||choice=='*')
	
	{
		printf("\n\tEnter num1:\n");
		scanf("%d",&num1);
		printf("\n\tEnter num2:\n");
		scanf("%d",&num2);
	
		printf("\t\n\n----------Your Result----------\n\n");
		printf("%d*%d=%d",num1,num2,num1*num2);
	}
	else if(choice=='O'||choice=='o'||choice=='%')
	{
		printf("\n\tEnter num1:\n");
		scanf("%d",&num1);
		printf("\n\tEnter num2:\n");
		scanf("%d",&num2);
	
		printf("\t\n\n----------Your Result----------\n\n");
		printf("%d%%d=%d",num1,num2,num1%num2);
	}
		
	else if(choice=='E'||choice=='e')
	{
		exit(0);
	}
		
	else
	{
		printf("\n\n\tSorry, That function isn't available yet. Choose another option from menu.\n\n");
	}
	
	}
}
