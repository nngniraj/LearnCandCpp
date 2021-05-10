#include <stdio.h>
main()
{
int i,j,big;  //variable declaration
printf("Enter two numbers");
scanf("%d%d",&i,&j); big = i;
if(big < j)   // statement A

{      // C
big = j;     
}     // D
printf("biggest of two numbers is %d \n",big);

{

if(i < j)  // statement B

    {
    big = j;   
    }
  else
    {
    big = i; 
    }
printf("biggest of two numbers(using else) is %d \n",big);
}
}
