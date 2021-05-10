#include<stdio.h>
#include<conio.h>
#include<dos.h>
int main()
{ char argv[100];
printf("This program will destroy itself if u press any key!!!\n");
getch();
remove(argv[0]);/*array of pointers to command line arguments*/
}
