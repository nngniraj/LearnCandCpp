# include <stdio.h>
int main( )
{
         FILE *fp ;
         char data[50] ;
         printf( "Opening the file demo.txt in read mode\n" ) ;
         fp = fopen( "x.txt", "r" ) ;
         if ( fp == NULL )
         {
                 printf( "Could not open file test.c" ) ;
                 return 1;
         }
         printf( "\nReading the file one.txt:\n" ) ;
         while( fgets ( data, 50, fp ) != NULL )
         printf( "%s" , data ) ;
         printf("\nClosing the file one.txt") ;
         fclose(fp) ;
         return 0;
}
