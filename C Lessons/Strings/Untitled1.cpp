#include<stdio.h>
union Distance
{
	int age;
	float salary;
	char name[20];
}u1;
struct Distance1
{
	int age;
	float salary;
	char name[20];
}s1;

int main()
{
 printf("Size of union:%d\n",sizeof(u1));
 printf("Size of struct:%d",sizeof(s1));
 
 	return 0;
}
