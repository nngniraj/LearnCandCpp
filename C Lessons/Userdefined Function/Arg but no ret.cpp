#include<stdio.h>
#include<conio.h>

  void area(float rad);  // Prototype Declaration

int main()
{
float rad;
   printf("Enter the radius : ");
   scanf("%f",&rad);
   area(rad);
getch();
}

void area(float rad)
{
float ar;
ar = 3.14 * rad * rad ;
printf("Area of Circle = %f",ar);
}
