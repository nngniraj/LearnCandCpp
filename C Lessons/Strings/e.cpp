#include <stdio.h>
int main()
{
   int num;
   FILE *fptr;
   fptr = fopen("test.txt","r");

   if (fptr == NULL)
   {
       printf("Error! opening file");

       // Program exits if the file pointer returns NULL.
      // exit(1);
   }

   fscanf(fptr,"%d", &num);

   printf("Value of n=%d", num);
   fclose(fptr); 
  
   return 0;
}
