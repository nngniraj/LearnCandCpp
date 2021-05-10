#include<stdio.h>
#include<conio.h>
int main()
{
        long int fact=1,i,n,sum=0;
       
        printf("\n ENTER THE VALUE OF N: ");
        scanf("%ld",&n);
        printf("\n THE SERIES IS ");
        for(i=1;i<=n;i++)
        {
            fact = fact * i;
            if(i==n)
                printf(" %ld",fact);
            else
                printf("%ld + ",fact);
                sum = sum + fact;
        }

        printf("\n**************************************");
        printf("\nTHE FACTORIAL VALUE IS %ld the sum is %ld",fact,sum);
        printf("\n**************************************");
        getch();

}
