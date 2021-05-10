#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter the value of a an b");
    scanf("%d%d",&a,&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("The value of a after swap:%d",a);
    printf("The value of b after swap:%d",b);
    return 0;
    
		
	}

