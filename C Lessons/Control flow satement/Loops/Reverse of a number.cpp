/**
 * C program to find reverse of any number
 */
 
#include <stdio.h>
 
int main()
{
    int n, rev = 0;
 
    /* Reads the number from user */
    printf("Enter any number to find reverse: ");
    scanf("%d", &n);
 
    /* Repeats the steps till n becomes 0 */
    while(n!=0)
    {
        /* Multiples rev by 10 and adds the last digit to it*/
        rev =  (rev*10)+(n % 10);
 
        /* Eliminates the last digit from num */
        n = n/10;
    }
 
    printf("Reverse = %d", rev);
 
    return 0;
}
