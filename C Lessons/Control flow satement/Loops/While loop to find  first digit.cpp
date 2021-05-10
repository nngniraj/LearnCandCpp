/**
 * C program to find first digit of a number 
 */
 
#include <stdio.h>
 
int main()
{
    int n;
 
    /* Reads number from user */
    printf("Enter any number: ");
    scanf("%d", &n);
 
    /* Removes last digit from number till only one digit is left */
    while(n>=10)
    {
        n = n%10;
    }
 
    printf("\nFirst digit = %d", n);
 
    return 0;
}
