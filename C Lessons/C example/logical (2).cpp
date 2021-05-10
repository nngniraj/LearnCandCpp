#include<stdio.h>
#include<conio.h>
int main()
{
int n1,n2,n3;

printf("\n Enter three Numbers ");
scanf("%d%d%d",&n1,&n2,&n3);
if((n1 > n2)&&(n1 > n3))
{
printf("\n Number %d is GREATER ",n1);
}
if((n2 > n1)&&(n2 > n3))
{
printf("\n Number %d is GREATER ",n2);
}
if((n3 > n1)&&(n3 > n2))
{
printf("\n Number %d is GREATER ",n3);
}
getch();

}
