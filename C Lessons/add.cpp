#include<stdio.h>
int main()
{
  int id,*ptr;
  id = 11;
  printf("Value of id is : %d\n",id);
  printf("Address of id is : %u\n",&id);
  ptr=id;
  printf("Value of ptr is :%d\n",*ptr);
  printf("Address of ptr is : %u\n",ptr);
  id= 34;
  printf("Value of ptr is :%d\n",*ptr);
  printf("Address of ptr is : %u\n",ptr);
  *ptr=45;
   printf("Value of id is : %d\n",id);
  printf("Address of id is : %u",&id);
      
	return 0;
}
