#include <stdio.h>
int main()
{
      double x,y,temp;

      printf("Enter first number: ");
      scanf("%lf", &x);

      printf("Enter second number: ");
      scanf("%lf",&y);

      // Value of x is assigned to temporaryVariable
      temp = x;

      // Value of y is assigned to firstNumber
      x = y;

      // Value of temp (which contains the initial value of x) is assigned to y
      y = temp;

      printf("\nAfter swapping, x = %.2lf\n", x);
      printf("After swapping, y = %.2lf", y);

      return 0;
}
