#include<stdio.h>
int main()
{
	char b ;
	int c = 0,d=0,x=0;
	printf("Enter a sentence:");
	while(b!='\n')
	{
		b=getchar();
		if(b!='\n')
		{
			if(b=='a'||b=='e'||b=='i'||b=='o'||b=='u')
			++c;
			else if(b==' ')
			++d;
			else
			++x;
		}
	}
	printf("Vowels=%d\n,spaces=%d\n,Consonant=%d",c,d,x);
	return 0;
}

