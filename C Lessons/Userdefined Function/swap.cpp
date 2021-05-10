#include<stdio.h>
 
void swap(int number1,int number2);
 
int main()
{
  int num1,num2;
 
  printf("Enter any two numbers\n");
  scanf("%d%d",&num1,&num2);
 
  swap(num1,num2);
 
  return 0;
}
 
void swap(int number1,int number2)
{
  number1 = number1 + number2;
  number2 = number1 - number2;
  number1 = number1 - number2;
 
  printf("After swapping,the numbers are %d,%d\n",number1,number2);
}
