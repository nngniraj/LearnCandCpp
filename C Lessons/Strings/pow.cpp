
#include <stdio.h>

int power(int n1, int n2);

int main()
{
    int base, powerRaised, result;

    printf("Enter base number: ");
    scanf("%d",&base);

    printf("Enter power number(positive integer): ");
    scanf("%d",&powerRaised);

    result = power(base, powerRaised);

    printf("%d^%d = %d", base, powerRaised, result);
    return 0;
}

int power(int n1, int n2)
{
    if (n2 != 0)
        return (n1*power(n1, n2-1));
    else
        return 1;
}
