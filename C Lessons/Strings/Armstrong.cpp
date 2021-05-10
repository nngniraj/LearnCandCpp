#include <stdio.h>
int main()
{
    int number, x, y, result = 0;

    printf("Enter a three digit integer: ");
    scanf("%d", &number);

  x = number;

    while (x != 0)
    {
        y = x%10;
        result += y*y*y;
        x /= 10;
    }

    if(result == number)
        printf("%d is an Armstrong number.",number);
    else
        printf("%d is not an Armstrong number.",number);

    return 0;
}
