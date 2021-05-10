// To generate a calculator using if.

#include<stdio.h>
#include<conio.h>
int main()
{
	int num1, num2;
	char choice;
	
	printf("-----MENUE-----\n");
	printf("\t A.Add\n");
	printf("\t S.SUB\n");
	printf("\t D.DIV\n");
	printf("\t M.MUL\n");
	//printf("\t O.MOD\n");
	printf("\tEnter Your Choice:\n");
	choice=getche();
	printf("\n\tEnter num1:\n");
	scanf("%d",&num1);
	printf("\n\tEnter num2:\n");
	scanf("%d",&num2);
	
	if(choice=='A'||choice=='a'||choice=='+')
	{
		printf("\t\n\n----------Your Result----------\n\n");
		printf("%d+%d=%d",num1,num2,num1+num2);
	}
	if(choice=='S'||choice=='s'||choice=='-')
	{
		printf("\t\n\n----------Your Result----------\n\n");
		printf("%d-%d=%d",num1,num2,num1-num2);
	}
	if(choice=='D'||choice=='d'||choice=='/')
	{
		printf("\t\n\n----------Your Result----------\n\n");
		printf("%d/%d=%d",num1,num2,num1/num2);
	}
	if(choice=='M'||choice=='m'||choice=='*')
	{
		printf("\t\n\n----------Your Result----------\n\n");
		printf("%d*%d=%d",num1,num2,num1*num2);
	}
	/*   if(choice=='O'||choice=='o'||choice=='%')
	{
		printf("\t\n\n----------Your Result----------\n\n");
		printf("%d%%d=%d",num1,num2,num1%num2);
	}   */
	

}
