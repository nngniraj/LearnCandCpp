#include <stdio.h>
 
int main()
{
    int num1, num2, num3, maximum;
 
    /*
     * Reads three numbers from user
     */
    printf("Enter three numbers to find maximum: \n");
    scanf("%d%d%d", &num1, &num2, &num3);
 
 
    /* If num1 is greater than both */
    if((num1>num2) && (num1>num3))
    {
        maximum = num1;
    }
    else if(num2>num3)
    {
        maximum = num2;
    }
    else
    {
        maximum = num3;
    }
 
    /* Prints the maximum number */
    printf("\nMaximum among all three numbers = %d\n", maximum);
 
    return 0;
} 
