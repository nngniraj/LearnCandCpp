//Open, write and close a file : */
# include <stdio.h>
# include <string.h>
 
int main( )
{
    FILE *fp ;
    char data[50];
    // opening an existing file
    //printf( "Opening the file test.c in write mode" ) ;
    fp = fopen("std.txt", "w") ;
    if ( fp == NULL )
    {
        printf( "Could not open file test.c" ) ;
        return 1;
    }
    printf( "\n Enter some text from keyboard:" ) ;
    // getting input from user
    while ( strlen ( gets( data ) ) > 0 )
    {
        // writing in the file
        fputs(data, fp) ;   
        fputs("\n", fp) ;
    }
    // closing the file
    printf("Closing the file std.txt") ;
    fclose(fp);
}
  
