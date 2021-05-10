#include <stdio.h>
 
int main ()
{
 
   FILE *fp;
   int i=1, j=2, k=3, num;
   fp = fopen ("demo.c","w");
   putw(i,fp);
   putw(j,fp);
   putw(k,fp);
   fclose(fp);
 
   fp = fopen ("demo.c","r");
 
   while(getw(fp)!=EOF)
   {
      num= getw(fp);
      printf("Data in demo.txt file is %d: \n", num);
   }
   fclose(fp);
   return 0;
}
