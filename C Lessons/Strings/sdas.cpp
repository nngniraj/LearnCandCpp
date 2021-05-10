#include <stdio.h>
struct person
{
	char name[50];
	float salary;
	int no;
	
}person1,person2;
int main(){
	printf("Enter first name :");
	gets(person1.name);
	printf("Enter salary:");
	scanf("%f",&person1.salary);
	printf("Enter worker No: ");
	scanf("%d",&person1.no);
	
	printf("For Second Employee: \n");
	
	printf("Enter second name:");
	gets(person2.name);
	printf("Enter salary:");
	scanf("%f",&person2.salary);
	printf("Enter worker No : ");
	scanf("%d",&person2.no);
	printf("Displaying Values:\n\n");
	printf("Name 1:%s\n",person1.name);
	printf("Salary 1:%f\n",person1.salary);
	printf("Worker No 1:%d\n",person1.no);
	printf("Name 2:%s\n",person2.name);
	printf("Salary 2:%f\n",person2.salary);
	printf("Worker No 2:%d\n",person2.no);
	return 0;
	
	
}
