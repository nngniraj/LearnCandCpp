#include <stdio.h>
#include<stdlib.h>
int main()
{
    int n, i,*ptr;
    int factorial = 1;

    printf("Enter an integer: ");
    scanf("%d",&n);
    ptr = (int*) malloc(n*sizeof(int));  //memory allocated using malloc
    if(ptr == NULL)                     
    {
        printf("Error! memory not allocated.");
        exit(0);
    }

    // show error if the user enters a negative integer
    if (ptr < 0)
        printf("Error! Factorial of a negative number doesn't exist.");

    else
    {
        for(i=1; i<=*ptr; ++i)
        {
            factorial *= i;              // factorial = factorial*i;
        }
        printf("Factorial of %d = %llu", *ptr, factorial);
    }
  free(ptr);
    return 0;
}
