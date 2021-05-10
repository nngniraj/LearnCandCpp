#include<stdio.h>
#include<conio.h>
int main()
{
	int num1,num2;
	char choice;
	printf("*******MENU***********\n");
	printf("\tA.ADD\n");
	printf("\tS.SUB\n");
	printf("\tD.DIV\n");
	printf("\tM.MUL\n");
//	printf("\tM.MOD\n");
	printf("Enter your choice:");
	//scanf("%c",&choice);
	choice=getche();
	printf("\nEnter the value of num1:");
	scanf("%d",&num1);
	printf("Enter the value of num2:");
	scanf("%d",&num2);
	
	if(choice=='A'||choice=='a'||choice=='+')
	{
		printf("\n******ADDITION******\n");
		printf("%d+%d=%d",num1,num2,num1+num2);
	}
	
	
	
}
