#include <stdio.h>
int main()
{
     int marks[3], i, n, sum = 0, average;
//     printf("Enter n: ");
//     scanf("%d", &n);
     for(i=0; i<4; ++i)
     {
          printf("Enter number%d: ",i+1);
          scanf("%d", &marks[i]);
          sum += marks[i];
     }
     average = sum/4;

     printf("Average marks = %d", average);

     return 0;
}
