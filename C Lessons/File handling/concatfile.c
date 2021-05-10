#include <stdio.h>
#include <stdlib.h>
 
int main()
{
   FILE *fs1, *fs2, *ft;
 
   char ch, c[20], w[20], a[20];
 
   printf("Enter name of first file\n");
   gets(c);
 
   printf("Enter name of second file\n");
   gets(w);
 
   printf("Enter name of file which will store contents of two files\n");
   gets(a);
 
   fs1 = fopen("c.xls","r");
   fs2 = fopen("w.xls","r");
 
   if( fs1 == NULL || fs2 == NULL )
   {
      perror("Error ");
      printf("Press any key to exit...\n");
      getch();
      exit(EXIT_FAILURE);
   }
 
   ft = fopen("a.xls","w");
 
 
 
 
   if( ft == NULL )
   {
      perror("Error ");
      printf("Press any key to exit...\n");
      exit(EXIT_FAILURE);
   }
 
   while( ( ch = fgetc(fs1) ) != EOF )
      fputc(ch,ft);
 
   while( ( ch = fgetc(fs2) ) != EOF )
      fputc(ch,ft);
 
   printf("Two files were merged into %s file successfully.\n",a);
 
   fclose(fs1);
   fclose(fs2);
   fclose(ft);
 
   return 0;
}
