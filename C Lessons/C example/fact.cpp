#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n, i,;
    unsigned long long factorial = 1;
     printf("Enter an integer: ");
    scanf("%d",&n);

//ptr = (int*) malloc(n*sizeof(int));  //memory allocated using malloc
//    if(ptr == NULL)                     
//    {
//        printf("Error! memory not allocated.");
//        //exit(0);
//    }
//    printf("Enter an integer: ");
//    scanf("%d",&n);

        for(i=1; i<=n; ++i)
        {
            factorial *= i;              // factorial = factorial*i;
        }
        
		printf("Factorial of %d = %llu", n, factorial);
    

    return 0;
}
