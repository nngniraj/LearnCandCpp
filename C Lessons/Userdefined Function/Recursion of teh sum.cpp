#include <stdio.h>
int fact(int n);

int main()
{
 int num,result;
 printf("Enter a number: ");
 scanf("%d",&num);
result = fact(num);
printf("factorial is : %d",result);
return 0;
}
int fact(int n){
	int f;
	if(n==0){
		return 0;
	}
	else
	{
	 f = n*fact(n-1);
	 return f;
	}
}

