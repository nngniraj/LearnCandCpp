#include<stdio.h>
int main()
{
   int x,y;
  printf("Enter your choice:");
  scanf("%d%d",&x,&y);
  x=x+y;
  y=x-y;
  x=x-y;
  printf("%d\n",x);
  printf("%d",y);
  return 0;  
  
}
