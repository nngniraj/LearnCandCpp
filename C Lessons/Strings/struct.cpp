#include <stdio.h>
struct student
{
    char name[50];
    int roll;
    float marks;
    char sec[20];
} s[10];

int main()
{
    int i;

    printf("Enter information of students:\n");

    // storing information
    for(i=0; i<2; ++i)
    {
        

        printf("Enter name: ");
        scanf("%s",s[i].name);

		printf("Enter roll: ");
        scanf("%d",&s[i].roll);
        
        printf("Enter marks: ");
        scanf("%f",&s[i].marks);
        
        printf("Enter Sec: ");
        scanf("%s",s[i].sec);

        printf("\n");
    }

    printf("Displaying Information:\n\n");
    // displaying information
    for(i=0; i<10; ++i)
    {
        printf("\nRoll number: %d\n",i+1);
        printf("Name: ");
        puts(s[i].name);
        printf("Roll NO: %d",s[i].roll);
        printf("Marks: %.1f",s[i].marks);
        printf("Sec: %.s",s[i].sec);
        printf("\n");
    }
    return 0;
}

