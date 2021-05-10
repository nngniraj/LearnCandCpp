#include<stdio.h>
int main()
{
   int i,x=0,y=1,next,n;
   printf("Enter n:");
   scanf("%d",&n);
   for(i=1;i<=n;i++)
   {
   	  if(i==1)
   	  {
   	  	printf("%d,",x);
   	  	continue;
		 }
		 if(i==2)
		 {
		 	printf("%d,",y);
		 	continue;
		 }
		 next=x+y;
		 x=y;
		 y=next;
		 printf(",%d",next);
		
   }
   return 0;
}
