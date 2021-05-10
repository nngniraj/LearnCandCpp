#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	while(1)
	{
	
	printf("\n-----MENU-----\n");
	printf("[1]. Binary conversion\n");
	printf("[2]. Operate with strings\n");
	printf("[3]. Print pyramid\n");
	printf("[4]. Exit\n");
	int n;
	printf("Enter your choice:");
	scanf("%d",&n);
	switch(n)
	{
		case 1 :
		{
		 
		 		 long int num, decimalnum, rem, base = 1, binary = 0;
 
				    printf("Enter a decimal integer \n");
				    scanf("%ld", &num);
				    decimalnum = num;
				    while (num > 0)
				    {
				        rem = num % 2;
				       binary = binary + rem * base;
				        num = num / 2;
				        base = base * 10;
				    }
				    printf("Input number is = %d\n", decimalnum);
				    printf("Its binary equivalent is = %ld\n", binary);
				}
					break;
					
		case 2 :
			{
			
				int i,length=0,flag;
				char str[10],rev[10];
				printf("Enter the string:");
				scanf("%s",&str);
				for(i=0;str[i]!='\0';i++)
				{
				length++;
				}
				printf("\nLength of %s is: %d\n",str,length);
				length--;
				for(i=0;length>=0;i++)
				{
				 rev[i]=str[length];
				 length--;
				}
				rev[i]='\0';
				printf("\nReverse of %s is ==>%s\n",str,rev);
				
				 length++;
				for(i=0;rev[i]!='\0';i++)
				{
				length++;
				}
				printf("\nLength of %s is ==>%d\n",rev,length);
				
				for(i=0;str[i]!='\0'||rev[i]!='\0';i++)
				{
				if(str[i]!=rev[i])
				    {
				    flag=1;
				    break;
				    }
				}
				if(flag==1)
				printf("\nString is not palindrome");
				else
				printf("\nString is palindrome");
			
}   
              break;
			
	    case 3 :
	    	 {
			 
	    	   int row,i,j;
	    	   printf("Enter no of rows:");
	    	   scanf("%d",&row);
	    	   for(i=1;i<=row;i++)
	    	   {
	    	   	for(j=1;j<=i;j++)
	    	   	{
	    	   		printf("* ");
				   }
				   printf("\n");
			   }
		}
		break;
		case 4 :
			{
				exit(0);
			}
		
	
}
}

}
