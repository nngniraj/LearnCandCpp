// To store the data of student.

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct student
{
	char name[25];
	char cast[25];
	int id;
	float marks;
}
a;
int main()
{
	printf("Enter Full Name of Student:\n");
	scanf("%s %s",&a.name,a.cast);
	printf("Enter ID of Student:\n");
	scanf("%d",&a.id);
	printf("Enter Marks of Student:\n");
	scanf("%f",&a.marks);
	//For Displaying
	printf("\n\n----------Displaying Given Info----------");
	printf("\nName: %s %s\n",a.name,a.cast);
	printf("ID: %d\n",a.id);
	printf("Marks: %.1f",a.marks);
	getch();
	return 0;
}
