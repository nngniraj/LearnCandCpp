#include <stdio.h>
#include<conio.h>
int main()
{
    char ch;
  

    printf("Enter an alphabet: ");
    scanf("%c",&ch);
   
    if(ch>=65&&ch<=91||ch>=97&&ch<=122)
	{
    	if(ch==65||ch==69||ch==73||ch==79||ch==85)
    	{
    		printf("Vowel");
		}
		else
		{
			printf("Consonant");
		}
	}
	else
	{
		printf("Neither Vowel nor consonant");
	}


    return 0;
}
