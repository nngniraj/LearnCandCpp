#include<stdio.h>
#include<conio.h>
int main ()
{
 char ch;
 float num1,num2;

 printf("What do you want to do?\n");
 printf("Addition, Subtraction, Multiplication or Division:");
 //scanf("%c",&ch);
 ch=getche();//gets character and display the character in the screen
 printf("\nEnter first number:");
 scanf("%f",&num1);
 printf("\nEnter second number:");
 scanf("%f",&num2);
 printf("\n\n");


if(ch=='A'||ch=='a'||ch=='+')
{

 printf("%f + %f = %.2f",num1,num2, num1+num2);
}

if(ch=='S')
{
   
 printf("%f - %f = %.2f",num1,num2,num1-num2);
}
if(ch=='M'){
 
 printf("%f * %f = %.2f",num1,num2,num1*num2);
}
if(ch=='D')  {

 printf("%f / %f = %.2f",num1,num2,num1/num2);
}
getch();  //gets single character but doesnt display in the screen



}
