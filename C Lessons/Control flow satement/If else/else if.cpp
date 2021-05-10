/**
 * C program to print day of week
 */
 
#include <stdio.h>
 
int main()
{
    int week;
 
    /* Reads week number from user */
    printf("Enter week number (1-7): ");
    scanf("%d", &week);
 
 
    if(week == 1)
    {
        printf("MONDAY\n");
    }
    else if(week == 2)
    {
        printf("TUESDAY\n");
    }
    else if(week == 3)
    {
        printf("WEDNESDAY\n");
    }
    else if(week == 4)
    {
        printf("THURSDAY\n");
    }
    else if(week == 5)
    {
        printf("FRIDAY\n");
    }
    else if(week == 6)
    {
        printf("SATURDAY\n");
    }
    else if(week == 7)
    {
        printf("SUNDAY\n");
    }
    else
    {
        printf("Invalid Input! Please enter week number between 1-7.\n");
    }
 
    return 0;
}
