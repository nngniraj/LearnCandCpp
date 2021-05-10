// To store the data of multipel student.

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct student
{
	char name[50];
	int roll;
	float marks;
} s[10];
int main()
{
	int i;
	printf("----------Enter Information of Student----------\n");
	// Storing Information
	for(i=0;i<10;++i)
	{
		s[i].roll=i+1;
		printf("\nFor Roll Number %d,\n",s[i].roll);
		printf("Enter name:\n");
		scanf("%s",s[i].name);
		printf("Enter Marks:\n");
		scanf("%f",&s[i].marks);
		printf("\n");
	}
	printf("\n----------Displaying Information----------\n\n");
	//Displaying informtion
	for(i=0;i<10;++i)
	{
		printf("\nRoll number: %d\n",i+1);
		printf("Name:%s\n",s[i].name);
		//puts(s[i].name);
		printf("Marks: %.1f",s[i].marks);
		printf("\n");
	}
	getch();
	return 0;
}
