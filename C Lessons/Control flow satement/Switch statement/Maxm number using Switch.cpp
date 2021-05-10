/**
 * C program to find maximum between two numbers using switch case
 */
 
#include <stdio.h>
 
int main()
{
    int num1, num2;
 
    /*
     * Reads two numbers from user
     */
    printf("Enter two numbers to find maximum: ");
    scanf("%d %d", &num1, &num2);
 
    //The condition num1 > num2 will always return either 0 or 1
    switch(num1 > num2)
    {   
        /* If the condition num1>num2 is false */
        case 0: printf("\n%d is max", num2);
            break;
        /* If the condition num1>num2 is true */
        case 1: printf("\n%d is maximum", num1);
            break;
    }
 
    return 0;
}
