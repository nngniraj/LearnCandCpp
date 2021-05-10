#include <stdio.h>
int main()
{
   float a[2][2][3], b[2][2][3], c[2][2][3];
   int i, j;

   // Taking input using nested for loop
   printf("Enter elements of 1st matrix\n");
   for(i=0; i<2; ++i)
    for(j=0; j<2; ++j)
    for(int k=0;k<3;++k)
    {
       printf("Enter a%d%d%d: ", i+1, j+1,k+1);
       scanf("%f", &a[i][j][k]);
    }

  // Taking input using nested for loop
   printf("Enter elements of 2nd matrix\n");
   for(i=0; i<2; ++i)
    for(j=0; j<2; ++j)
    for(int k=0;k<3;++k)
    {
       printf("Enter b%d%d%d: ", i+1, j+1,k+1);
       scanf("%f", &b[i][j][k]);
    }

   // adding corresponding elements of two arrays
   for(i=0; i<2; ++i)
    for(j=0; j<2; ++j)
    for(int k=0;k<3;++k)
    {
       c[i][j][k] = a[i][j][k] + b[i][j][k]; 
    }

   // Displaying the sum
   printf("\n Sum Of Matrix: \n\n");

   for(i=0; i<2; ++i)
    for(j=0; j<2; ++j)
    for(int k=0;k<3;++k)
    {
       printf("%.1f \t", c[i][j][k]);  
       
       if(k==2)            
          printf("\n\n");
    }
return 0;
}
