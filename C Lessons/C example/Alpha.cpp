#include <stdio.h>
int main()
{
    int i, j;
    char inp, alphabet = 'A';

    printf("Enter the uppercase character you want to print in last row: ");
    scanf("%c",&inp);

    for(i=1; i <= (inp-'A'+1); ++i)
    {
        for(j=1;j<=i;++j)
        {
            printf("%c", alphabet);
        }
        ++alphabet;

        printf("\n");
    }
    return 0;
}
