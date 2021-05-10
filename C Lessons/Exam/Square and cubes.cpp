#include <stdio.h>
#include<conio.h>
int main()
{
int i;
for(i = 1; i < 10; i++)
printf("%d %8d %8d\n", i, i * i, i * i * i);
getch();
}
